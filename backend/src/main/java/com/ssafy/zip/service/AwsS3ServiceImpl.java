package com.ssafy.zip.service;

import com.amazonaws.services.s3.AmazonS3Client;
import com.amazonaws.services.s3.model.CannedAccessControlList;
import com.amazonaws.services.s3.model.ObjectMetadata;
import com.amazonaws.services.s3.model.PutObjectRequest;
import lombok.RequiredArgsConstructor;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.http.HttpStatus;
import org.springframework.stereotype.Service;
import org.springframework.web.multipart.MultipartFile;
import org.springframework.web.server.ResponseStatusException;

import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.UUID;

import static com.google.common.io.Files.getFileExtension;

@RequiredArgsConstructor
@Service
public class AwsS3ServiceImpl implements AwsS3Service{
    private final AmazonS3Client amazonS3Client;

    @Value("${clout.aws.s3.bucket}")
    private String bucketName;


    @Override
    public List<String[]> uploadFiles(String path, List<MultipartFile> files) throws Exception {
        List<String[]> uploadList = new ArrayList<>();

        // forEach 구문을 통해 multipartFile로 넘어온 파일들 하나씩 fileNameList에 추가
        files.forEach(file -> {
            String fileName = path+"/"+createFileName(file.getOriginalFilename());
            ObjectMetadata objectMetadata = new ObjectMetadata();
            objectMetadata.setContentLength(file.getSize());
            objectMetadata.setContentType(file.getContentType());

            try(InputStream inputStream = file.getInputStream()) {
                amazonS3Client.putObject(new PutObjectRequest(bucketName, fileName, inputStream, objectMetadata)
                        .withCannedAcl(CannedAccessControlList.PublicRead));
            } catch(IOException e) {
                throw new ResponseStatusException(HttpStatus.INTERNAL_SERVER_ERROR, "파일 업로드에 실패했습니다.");
            }
            uploadList.add(new String[] {amazonS3Client.getUrl(bucketName,fileName).toString(), file.getOriginalFilename()});
        });

        return uploadList;
    }

    private String createFileName(String fileName) { // 파일 업로드 시, 파일명을 난수화.
        return UUID.randomUUID().toString().concat(getFileExtension(fileName));
    }
}
