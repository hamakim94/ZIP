package com.ssafy.zip.service;

import com.ssafy.zip.dto.request.PictureRequestDTO;
import com.ssafy.zip.dto.response.AlbumResponseDTO;
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

import java.util.ArrayList;
import java.util.List;

@Slf4j
@Service
@RequiredArgsConstructor
public class AlbumServiceImpl implements AlbumService{
    private final AlbumRepository albumRepository;
    private final PictureRepository pictureRepository;
    private final UserRepository userRepository;

    @Override
    public void createFolder(long userId, String name) throws Exception {
        User user = userRepository.findById(userId).get();
        Album album = Album.builder()
                .name(name)
                .family(user.getFamily())
                .build();
        albumRepository.save(album);
    }

    @Override
    public void deleteFolder(long albumId) throws Exception {
        albumRepository.deleteById(albumId);
    }

    @Override
    public List<PictureResponseDTO> uploadPictures(List<PictureRequestDTO> pictures) throws Exception {
        List<Picture> pictureList = new ArrayList<>();
        for (PictureRequestDTO picture: pictures) {
            pictureList.add(Picture.builder()
                    .fileName("")
                    .album()
                    .fileName()
                    .directory()
                    .build());
        }
        pictureRepository.saveAll(pictureList);
        return null;
    }

    @Override
    public void deletePictures(List<PictureRequestDTO> pictures) throws Exception {

    }

    @Override
    public List<AlbumResponseDTO> listAll(long userId) throws Exception {
        return null;
    }

    @Override
    public List<PictureResponseDTO> movePictures(List<PictureRequestDTO> pictures, long fromAlbumId, long toAlbumId) throws Exception {
        return null;
    }

    @Override
    public List<PictureResponseDTO> listFolder() throws Exception {
        return null;
    }

    @Override
    public PictureResponseDTO pictureDetail() throws Exception {
        return null;
    }
}
