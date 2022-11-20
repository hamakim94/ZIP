package com.ssafy.zip.service;

import org.springframework.web.multipart.MultipartFile;

import java.util.List;

public interface AwsS3Service {
    List<String[]> uploadFiles(String path, List<MultipartFile> files) throws Exception;
}
