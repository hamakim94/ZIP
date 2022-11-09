package com.ssafy.zip.service;

import com.google.gson.Gson;
import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.UnityUseItemRequestDTO;
import com.ssafy.zip.dto.response.UnityAlbumResponseDTO;
import com.ssafy.zip.dto.response.UnityItemResponseDTO;
import com.ssafy.zip.dto.response.UnityPositionItemsResponseDTO;
import com.ssafy.zip.entity.FamilyFurniture;
import com.ssafy.zip.exception.ErrorCode;
import com.ssafy.zip.exception.ResourceNotFoundException;
import com.ssafy.zip.exception.UnauthorizedRequestException;
import com.ssafy.zip.repository.FamilyFurnitureRepository;
import com.ssafy.zip.repository.UnityAlbumRepository;
import com.ssafy.zip.util.UnityItemResponseDTOMapStruct;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.security.core.parameters.P;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.*;
import java.util.stream.Collectors;

@Slf4j
@Service
@RequiredArgsConstructor
public class UnityServiceImpl implements UnityService {
    private final FamilyFurnitureRepository familyFurnitureRepository;
    private final UnityAlbumRepository unityAlbumRepository;
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
                .map(o->new UnityAlbumResponseDTO(o.getId(), o.getPicture().getAlbum().getId(), o.getPicture().getId()))
                .collect(Collectors.toList()));
    }
}
