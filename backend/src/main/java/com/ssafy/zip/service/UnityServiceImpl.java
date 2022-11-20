package com.ssafy.zip.service;

import ch.qos.logback.classic.spi.IThrowableProxy;
import ch.qos.logback.core.html.IThrowableRenderer;
import com.google.gson.Gson;
import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.UnityAlbumRequestDTO;
import com.ssafy.zip.dto.request.UnityUseItemRequestDTO;
import com.ssafy.zip.dto.response.UnityAlbumResponseDTO;
import com.ssafy.zip.dto.response.UnityItemResponseDTO;
import com.ssafy.zip.dto.response.UnityPositionItemsResponseDTO;
import com.ssafy.zip.entity.FamilyFurniture;
import com.ssafy.zip.entity.Picture;
import com.ssafy.zip.entity.UnityAlbum;
import com.ssafy.zip.exception.ErrorCode;
import com.ssafy.zip.exception.ResourceNotFoundException;
import com.ssafy.zip.exception.UnauthorizedRequestException;
import com.ssafy.zip.repository.*;
import com.ssafy.zip.util.UnityItemResponseDTOMapStruct;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.security.core.parameters.P;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.time.LocalDateTime;
import java.util.*;
import java.util.stream.Collectors;

@Slf4j
@Service
@RequiredArgsConstructor
public class UnityServiceImpl implements UnityService {
    private final FamilyFurnitureRepository familyFurnitureRepository;
    private final UnityAlbumRepository unityAlbumRepository;
    private final PictureRepository pictureRepository;
    private final PointService pointService;
    private final CharacterRepository characterRepository;
    private final FurnitureRepository furnitureRepository;
    private final FamilyRepository familyRepository;
    @Override
    public String getSerializedFurnitureInfo(UserDTO userDTO) {
        List<FamilyFurniture> furnitureList = familyFurnitureRepository.findAllByFamily_Id(userDTO.getFamilyId());
        Map<Long, List<UnityItemResponseDTO>> furnitureListByPosition = new HashMap<>();
        furnitureList.forEach(o->{
            List<UnityItemResponseDTO> tmpList = furnitureListByPosition.getOrDefault(o.getFurniture().getPosition(), new ArrayList<>());
            tmpList.add(UnityItemResponseDTOMapStruct.INSTANCE.mapToUnityItem(o));
            furnitureListByPosition.put(o.getFurniture().getPosition(), tmpList);
        });
        List<Long> keys =furnitureListByPosition.keySet().stream().sorted().toList();

        List<UnityPositionItemsResponseDTO> resultList = new ArrayList<>();
        keys.forEach(k->resultList.add(new UnityPositionItemsResponseDTO(k,furnitureListByPosition.get(k))));

        return new Gson().toJson(resultList);
    }

    @Override
    public void purchaseFurniture(UserDTO userDTO, Long furnitureId) {
        pointService.updatePoint(userDTO, furnitureId);
        familyFurnitureRepository.save(new FamilyFurniture(null, familyRepository.getReferenceById(userDTO.getFamilyId()),
                furnitureRepository.getReferenceById(furnitureId),1, LocalDateTime.now()));
    }
    @Transactional
    @Override
    public void useFurniture(UserDTO userDTO, UnityUseItemRequestDTO dto) {
        if(!familyFurnitureRepository.existsByFurniture_Id(dto.furnitureId())) throw new UnauthorizedRequestException("요청하신 가구를 보유하고 있지 않습니다", ErrorCode.ANSWER_MORE_THAN_ONCE_ERROR);
        List<FamilyFurniture> furnitureList = familyFurnitureRepository.findByFurniture_Position(dto.furniturePosition());
        furnitureList.forEach(o->{
            if(o.getFurniture().getId().equals(dto.furnitureId())) o.setHasItemCode(2);
            else o.setHasItemCode(1);
        });
    }

    @Override
    public String getUnityAlbumInfo(UserDTO userDTO) {
        return new Gson().toJson(unityAlbumRepository.findByFamilyId(userDTO.getFamilyId()).stream()
                .map(o->new UnityAlbumResponseDTO(o.getPosition(), o.getPicture().getAlbum().getId(), o.getPicture().getId(), o.getPicture().getDirectory()))
                .collect(Collectors.toList()));
    }
    @Transactional
    @Override
    public void selectUnityAlbum(UserDTO userDTO, UnityAlbumRequestDTO unityAlbumRequestDTO) {

        pictureRepository.findById(unityAlbumRequestDTO.pictureId()).ifPresentOrElse(
                    p -> {
                        if(p.getUser().getFamily().getId().equals(userDTO.getFamilyId()))
                            unityAlbumRepository.findByFamilyIdAndPosition(userDTO.getFamilyId(), unityAlbumRequestDTO.position())
                                    .ifPresentOrElse(o->o.setPicture(p),
                                                    ()->unityAlbumRepository.save(new UnityAlbum(null,unityAlbumRequestDTO.position(), userDTO.getFamilyId(), p)));
                        else throw new UnauthorizedRequestException("가족의 사진이 아닙니다.", ErrorCode.FORBIDDEN);
                        }
                    ,()-> {throw  new ResourceNotFoundException("요청한 사진을 찾을 수 없습니다.", ErrorCode.NOT_FOUND);}
        );
    }

    @Override
    public String getCharacterAsset(UserDTO userDTO) {
        return userDTO.getProfileImg().getAssetName();
    }
}
