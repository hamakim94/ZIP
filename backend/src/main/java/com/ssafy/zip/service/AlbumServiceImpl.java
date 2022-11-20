package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.PictureRequestDTO;
import com.ssafy.zip.dto.response.AlbumResponseDTO;
import com.ssafy.zip.dto.response.PictureResponseDTO;
import com.ssafy.zip.entity.Album;
import com.ssafy.zip.entity.Notification;
import com.ssafy.zip.entity.Picture;
import com.ssafy.zip.entity.User;
import com.ssafy.zip.repository.AlbumRepository;
import com.ssafy.zip.repository.PictureRepository;
import com.ssafy.zip.repository.UserRepository;
import com.ssafy.zip.util.CommonCodeEnum;
import com.ssafy.zip.util.NotificationEnum;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.stereotype.Service;
import org.springframework.web.multipart.MultipartFile;

import javax.transaction.Transactional;
import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

@Slf4j
@Service
@RequiredArgsConstructor
public class AlbumServiceImpl implements AlbumService{
    private final AlbumRepository albumRepository;
    private final PictureRepository pictureRepository;
    private final UserRepository userRepository;
    private final AwsS3Service awsS3Service;
    private final NotificationServiceImpl notificationService;
    private final PointService pointService;

    @Override
    public AlbumResponseDTO createFolder(long userId, String name) throws Exception {
        User user = userRepository.findById(userId).get();
        Album album = Album.builder()
                .name(name)
                .family(user.getFamily())
                .build();
        albumRepository.save(album);
        return new AlbumResponseDTO(album.getId(), album.getName(), new ArrayList<>());
    }

    @Transactional
    @Override
    public void deleteFolder(UserDTO user, long albumId) throws Exception {
        if (user.getFamilyId() != albumRepository.getReferenceById(albumId).getFamily().getId()) throw new Exception();
        albumRepository.deleteById(albumId);
    }

    @Transactional
    @Override
    public List<PictureResponseDTO> uploadPictures(UserDTO userDTO, PictureRequestDTO pictureRequestDTO, List<MultipartFile> pictures) throws Exception {
        List<Picture> pictureList = new ArrayList<>();
        List<PictureResponseDTO> results = new ArrayList<>();
        Album album = albumRepository.getReferenceById(pictureRequestDTO.getAlbumId());
        User user = userRepository.getReferenceById(userDTO.getId());
        List<String[]> uploadResults = awsS3Service.uploadFiles("album",pictures);
        for (String[] result: uploadResults) {
            pictureList.add(Picture.builder()
                    .fileName(result[1])
                    .album(album)
                    .directory(result[0])
                    .user(user)
                    .reg(LocalDateTime.now())
                    .build());
        }
        List<Picture> list = pictureRepository.saveAll(pictureList);
        Long userId = user.getId();
        Long albumId = album.getId();
        for (Picture picture:list) {
            results.add(new PictureResponseDTO(picture.getId(), userId, albumId, picture.getFileName(), picture.getDirectory(), picture.getReg()));
        }
        notificationService.sendNotification(new Notification(null,null, String.format(NotificationEnum.PictureUploaded.getMessage(), userDTO.getNickname()),NotificationEnum.PictureUploaded.getLink(), userDTO.getProfileImg().getImage(),false, LocalDateTime.now()),
                userRepository.findByFamily_Id(userDTO.getFamilyId()).stream().filter(o->!o.getId().equals(userDTO.getId())).map(o->o.getId()).collect(Collectors.toList()));
        pointService.updatePoint(userDTO, CommonCodeEnum.PictureUploaded.getCode());
        return results;
    }

    @Transactional
    @Override
    public void deletePictures(List<PictureRequestDTO> pictures) throws Exception {
        List<Long> pictureIdList = new ArrayList<>();
        for (PictureRequestDTO picture:pictures) {
            pictureIdList.add(picture.getPictureId());
        }
        pictureRepository.deleteAllById(pictureIdList);
    }

    @Override
    public List<AlbumResponseDTO> listAll(long userId) throws Exception {
        User user = userRepository.getReferenceById(userId);
        List<Album> list = albumRepository.findAllByFamily_Id(user.getFamily().getId());
        List<AlbumResponseDTO> albumResult = new ArrayList<>();
        for (Album album:list) {
            List<PictureResponseDTO> pictureResults= new ArrayList<>();
            for (Picture picture: album.getPictures()) {
                pictureResults.add(new PictureResponseDTO(picture.getId(), picture.getUser().getId(), album.getId(), picture.getFileName(), picture.getDirectory(), picture.getReg()));
            }
            albumResult.add(new AlbumResponseDTO(album.getId(), album.getName(), pictureResults));
        }
        return albumResult;
    }
    @Transactional
    @Override
    public List<PictureResponseDTO> movePictures(List<PictureRequestDTO> pictures, long toAlbumId) throws Exception {
        List<Long> pictureIdList = new ArrayList<>();

        for (PictureRequestDTO picture: pictures) {
            pictureIdList.add(picture.getPictureId());
        }
        List<Picture> pictureList = pictureRepository.findAllById(pictureIdList);
        Album album = albumRepository.getReferenceById(toAlbumId);
        for (Picture picture:pictureList) {
            picture.setAlbum(album);
        }
        List<Picture> list = pictureRepository.saveAll(pictureList);
        List<PictureResponseDTO> results = new ArrayList<>();
        Long userId = list.get(0).getUser().getId();
        Long albumId = album.getId();
        for (Picture picture:list) {
            results.add(new PictureResponseDTO(picture.getId(), userId, albumId, picture.getFileName(), picture.getDirectory(), picture.getReg()));
        }
        return results;
    }


    //필요 없는 메소드인듯
    @Override
    public AlbumResponseDTO listAlbum(UserDTO userDTO, Long albumId) throws Exception {
        User user = userRepository.getReferenceById(userDTO.getId());
        Album album = albumRepository.findByFamily_IdAndId(user.getFamily().getId(), albumId);
        List<PictureResponseDTO> pictureResults= new ArrayList<>();
        for (Picture picture: album.getPictures()) {
            pictureResults.add(new PictureResponseDTO(picture.getId(), picture.getUser().getId(), album.getId(), picture.getFileName(), picture.getDirectory(), picture.getReg()));
        }
        AlbumResponseDTO albumResult = new AlbumResponseDTO(album.getId(), album.getName(), pictureResults);
        return albumResult;
    }
    //필요 없는 메소드인듯2
    @Override
    public PictureResponseDTO pictureDetail(UserDTO userDTO, Long pictureId) throws Exception {
        User user = userRepository.getReferenceById(userDTO.getId());
        Picture picture = pictureRepository.findByIdAndAlbum_FamilyId(pictureId, user.getFamily().getId());
        return new PictureResponseDTO(picture.getId(), picture.getUser().getId(), picture.getAlbum().getId(), picture.getFileName(), picture.getDirectory(), picture.getReg());
    }
}
