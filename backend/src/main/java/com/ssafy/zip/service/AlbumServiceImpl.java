package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.PictureRequestDTO;
import com.ssafy.zip.dto.response.PictureResponseDTO;
import com.ssafy.zip.entity.Album;
import com.ssafy.zip.entity.Picture;
import com.ssafy.zip.entity.User;
import com.ssafy.zip.repository.AlbumRepository;
import com.ssafy.zip.repository.PictureRepository;
import com.ssafy.zip.repository.UserRepository;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.stereotype.Service;
import org.springframework.web.multipart.MultipartFile;

import javax.transaction.Transactional;
import java.util.ArrayList;
import java.util.List;

@Slf4j
@Service
@RequiredArgsConstructor
public class AlbumServiceImpl implements AlbumService{
    private final AlbumRepository albumRepository;
    private final PictureRepository pictureRepository;
    private final UserRepository userRepository;
    private final AwsS3Service awsS3Service;

    @Override
    public void createFolder(long userId, String name) throws Exception {
        User user = userRepository.findById(userId).get();
        Album album = Album.builder()
                .name(name)
                .family(user.getFamily())
                .build();
        albumRepository.save(album);
    }

    @Transactional
    @Override
    public void deleteFolder(UserDTO user, long albumId) throws Exception {
        if (user.getFamilyId() != albumRepository.getReferenceById(albumId).getFamily().getId()) throw new Exception();
        albumRepository.deleteById(albumId);
    }

    @Transactional
    @Override
    public List<PictureResponseDTO> uploadPictures(PictureRequestDTO pictureRequestDTO, List<MultipartFile> pictures) throws Exception {
        List<Picture> pictureList = new ArrayList<>();
        List<PictureResponseDTO> results = new ArrayList<>();
        Album album = albumRepository.getReferenceById(pictureRequestDTO.getAlbumId());
        User user = userRepository.getReferenceById(pictureRequestDTO.getUserId());
        List<String[]> uploadResults = awsS3Service.uploadFiles("album",pictures);
        for (String[] result: uploadResults) {
            pictureList.add(Picture.builder()
                    .fileName(result[1])
                    .album(album)
                    .directory(result[0])
                    .user(user)
                    .build());
        }
        List<Picture> list = pictureRepository.saveAll(pictureList);
        Long userId = user.getId();
        Long albumId = album.getId();
        for (Picture picture:list) {
            results.add(new PictureResponseDTO(picture.getId(), userId, albumId, picture.getFileName(), picture.getDirectory()));
        }
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
    public List<PictureResponseDTO> listAll(long userId) throws Exception {
        User user = userRepository.getReferenceById(userId);
        List<Picture> list = pictureRepository.findAllByAlbum_FamilyIdOrderByAlbum(user.getFamily().getId());
        List<PictureResponseDTO> results = new ArrayList<>();
        for (Picture picture:list) {
            results.add(new PictureResponseDTO(picture.getId(), picture.getUser().getId(), picture.getAlbum().getId(), picture.getFileName(), picture.getDirectory()));
        }
        return results;
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
            results.add(new PictureResponseDTO(picture.getId(), userId, albumId, picture.getFileName(), picture.getDirectory()));
        }
        return results;
    }


    //필요 없는 메소드인듯
    @Override
    public List<PictureResponseDTO> listFolder() throws Exception {
        return null;
    }
    //필요 없는 메소드인듯2
    @Override
    public PictureResponseDTO pictureDetail() throws Exception {
        return null;
    }
}
