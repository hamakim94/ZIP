package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.QnaAnswerModifyRequestDTO;
import com.ssafy.zip.dto.request.QnaAnswerRequestDTO;
import com.ssafy.zip.dto.response.QnaAnswerResponseDTO;
import com.ssafy.zip.dto.response.QnaDTO;
import com.ssafy.zip.dto.response.QnaDetailDTO;
import com.ssafy.zip.entity.Qna;
import com.ssafy.zip.entity.QnaLog;
import com.ssafy.zip.entity.User;
import com.ssafy.zip.repository.QnaLogRepository;
import com.ssafy.zip.repository.QnaRepository;
import com.ssafy.zip.repository.UserRepository;
import com.ssafy.zip.util.QnaAnswerMapStruct;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.time.LocalDateTime;
import java.util.*;

@Service
@RequiredArgsConstructor
public class QnaServiceImpl implements QnaService {
    private final UserRepository userRepository;
    private final QnaRepository qnaRepository;
    private final QnaLogRepository qnaLogRepository;
    @Override
    public Qna saveQuestion(String question) {
        return qnaRepository.save(new Qna(null, question));
    }


    @Override
    public QnaLog saveAnswer(UserDTO user, QnaAnswerRequestDTO dto) {
        User userTmp = userRepository.getReferenceById(user.getId());
        Qna qna = qnaRepository.getReferenceById(dto.qnaId());
        return qnaLogRepository.save(new QnaLog(null, dto.content(), user.getFamilyId(), userTmp, qna, LocalDateTime.now()));
    }

    @Override
    public List<QnaDTO> listQna(UserDTO user) {
        List<QnaLog> list = qnaLogRepository.findByFamilyId(user.getFamilyId());
        Set<Long> qnaIdSet = new HashSet<>();
        List<QnaDTO> result = new ArrayList<>();
        list.forEach(o -> {
            Qna qna = o.getQna();
            if(!qnaIdSet.contains(qna.getId())){
                qnaIdSet.add(qna.getId());
                result.add(new QnaDTO(qna.getId(), qna.getQuestion(),o.getReg().toLocalDate().atTime(0, 0),findAnswerCnt(qna.getId(), list)));
            }
        });
        return result;
    }

    @Override
    public QnaDetailDTO getQnaDetail(UserDTO user, Long qnaId) {
        List<QnaLog> qnaLogs = qnaLogRepository.findByFamilyIdAndQnaId(user.getFamilyId(), qnaId);
        if(qnaLogs.get(0)!=null) {
            Qna qna= qnaLogs.get(0).getQna();
            List<QnaAnswerResponseDTO> list= new ArrayList<>();
            qnaLogs.forEach(o-> list.add(QnaAnswerMapStruct.INSTANCE.mapToQnaAnswerDTO(o)));
            return new QnaDetailDTO(qna.getId(),qna.getQuestion(), list);
        }
        else return null;

    }
    @Transactional
    @Override
    public void modifyAnswer(UserDTO user, QnaAnswerModifyRequestDTO qnaAnswerModifyRequestDTO) {
        Optional<QnaLog> qnaLog = qnaLogRepository.findById(qnaAnswerModifyRequestDTO.qnaLogId());
        if(qnaLog.isPresent()){
            QnaLog log = qnaLog.get();
            log.setContent(qnaAnswerModifyRequestDTO.content());
        }
    }

    Integer findAnswerCnt(Long qnaId, List<QnaLog> list){
        return Math.toIntExact(list.stream().filter(o -> o.getQna().getId().equals(qnaId)).count());
    }
}
