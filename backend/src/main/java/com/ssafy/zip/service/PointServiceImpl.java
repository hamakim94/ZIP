package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.entity.CommonCode;
import com.ssafy.zip.entity.Furniture;
import com.ssafy.zip.entity.Point;
import com.ssafy.zip.exception.ErrorCode;
import com.ssafy.zip.exception.ResourceNotFoundException;
import com.ssafy.zip.exception.UnauthorizedRequestException;
import com.ssafy.zip.repository.*;
import com.ssafy.zip.util.CommonCodeEnum;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.time.LocalDateTime;
import java.util.List;
import java.util.Optional;

@Slf4j
@Service
@RequiredArgsConstructor
public class PointServiceImpl implements PointService {
    private final PointRepository pointRepository;
    private final FamilyRepository familyRepository;
    private final UserRepository userRepository;
    private final CommonCodeRepository commonCodeRepository;
    private final FurnitureRepository furnitureRepository;

    @Override
    public void updatePoint(UserDTO userDTO, String code) {
        Optional<CommonCode> commonCodeOptional = commonCodeRepository.findByCode(code);
        commonCodeOptional.ifPresent(
                c->
                    pointRepository.save(new Point(null, LocalDateTime.now(),userDTO.getFamilyId(),userRepository.getReferenceById(userDTO.getId()),true,c,null))
        );

        commonCodeOptional.orElseThrow(()->new ResourceNotFoundException("존재하지 않는 미션입니다.", ErrorCode.NOT_FOUND));
    }
    @Transactional
    @Override
    public void updatePoint(UserDTO userDTO, Long furnitureId) {
        Optional<Furniture> furnitureOptional = furnitureRepository.findById(furnitureId);
        furnitureOptional.ifPresent(
                f-> {
                    if(getfamilyPoint(userDTO)>=f.getPoint()) pointRepository.save(new Point(null,LocalDateTime.now(),userDTO.getFamilyId(),userRepository.getReferenceById(userDTO.getId()),false,null,furnitureRepository.getReferenceById(furnitureId)));
                    else throw new UnauthorizedRequestException("포인트가 충분하지 않습니다.", ErrorCode.FORBIDDEN);
                }
        );
        furnitureOptional.orElseThrow(()->new ResourceNotFoundException("요청한 가구가 존재하지 않습니다.", ErrorCode.NOT_FOUND));
    }

    @Override
    public Integer getfamilyPoint(UserDTO userDTO) {
        return pointRepository.findByFamilyId(userDTO.getFamilyId()).stream().map(o->{
            if(o.getIsMission()) return o.getCode().getPoint();
            else return (-o.getFurniture().getPoint());
        }).reduce(0,Integer::sum);

    }
}
