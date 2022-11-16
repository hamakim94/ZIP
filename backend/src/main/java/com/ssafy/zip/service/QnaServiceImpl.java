package com.ssafy.zip.service;

import com.ssafy.zip.dto.UserDTO;
import com.ssafy.zip.dto.request.QnaAnswerModifyRequestDTO;
import com.ssafy.zip.dto.request.QnaAnswerRequestDTO;
import com.ssafy.zip.dto.response.QnaAnswerResponseDTO;
import com.ssafy.zip.dto.response.QnaDTO;
import com.ssafy.zip.dto.response.QnaDetailDTO;
import com.ssafy.zip.entity.*;
import com.ssafy.zip.exception.ResourceNotFoundException;
import com.ssafy.zip.exception.UnauthorizedRequestException;
import com.ssafy.zip.repository.FamilyRepository;
import com.ssafy.zip.repository.QnaLogRepository;
import com.ssafy.zip.repository.QnaRepository;
import com.ssafy.zip.repository.UserRepository;
import com.ssafy.zip.exception.ErrorCode;
import com.ssafy.zip.util.CommonCodeEnum;
import com.ssafy.zip.util.NotificationEnum;
import com.ssafy.zip.util.QnaAnswerMapStruct;
import lombok.RequiredArgsConstructor;
import lombok.SneakyThrows;
import org.springframework.scheduling.annotation.Async;
import org.springframework.scheduling.annotation.Scheduled;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.time.LocalDateTime;
import java.util.*;
import java.util.stream.Collectors;

@Service
@RequiredArgsConstructor
public class QnaServiceImpl implements QnaService {
    private final UserRepository userRepository;
    private final QnaRepository qnaRepository;
    private final QnaLogRepository qnaLogRepository;
    private final FamilyRepository familyRepository;
    private final NotificationServiceImpl notificationService;
    private final PointService pointService;
    @Override
    public Qna saveQuestion(String question) {
        return qnaRepository.save(new Qna(null, question));
    }

    @SneakyThrows
    @Transactional
    @Override
    public void saveAnswer(UserDTO user, QnaAnswerRequestDTO dto) {
        User userTmp = userRepository.getReferenceById(user.getId());
        Qna qna = qnaRepository.getReferenceById(dto.qnaId());
        if(qnaLogRepository.existsByUser_IdAndQna_id(user.getId(), dto.qnaId())) throw new UnauthorizedRequestException("이미 답변을 했습니다.", ErrorCode.ANSWER_MORE_THAN_ONCE_ERROR);
        qnaLogRepository.save(new QnaLog(null, dto.content(), user.getFamilyId(), userTmp, qna, LocalDateTime.now()));
        notificationService.sendNotification(new Notification(null,null, String.format(NotificationEnum.QnaAnswered.getMessage(), user.getNickname()),String.format(NotificationEnum.QnaAnswered.getLink(), qna.getId()), user.getProfileImg().getImage(),false,LocalDateTime.now()),
                userRepository.findByFamily_Id(user.getFamilyId()).stream().filter(o->!o.getId().equals(user.getId())).map(User::getId).collect(Collectors.toList()));
        pointService.updatePoint(user,CommonCodeEnum.QnaAnsweredForEach.getCode());

        if(userTmp.getFamily().getMemberNum().equals(qnaLogRepository.findByFamilyIdAndQnaId(user.getFamilyId(), dto.qnaId()).size())){
            pointService.updatePoint(user, CommonCodeEnum.QnaAnsweredForFamily.getCode());
            notificationService.sendNotification(new Notification(null,null, String.format(NotificationEnum.QnaMissionAccomplished.getMessage(), user.getNickname()),String.format(NotificationEnum.QnaMissionAccomplished.getLink(), qna.getId()), user.getProfileImg().getImage(),false,LocalDateTime.now()),
                    userTmp.getFamily().getUsers().stream().map(User::getId).collect(Collectors.toList()));
        }
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
        Optional<Family> familyOpt = familyRepository.findById(user.getFamilyId());
        Family family = familyOpt.get();
        if(!qnaIdSet.contains(family.getQna().getId())){
            Qna qna = family.getQna();
            result.add(new QnaDTO(qna.getId(), qna.getQuestion(),LocalDateTime.now().toLocalDate().atTime(0, 0),0));
        }

        return result.stream().sorted((o1, o2) -> o2.reg()
                .compareTo(o1.reg()))
                .collect(Collectors.toList());
    }

    @Override
    public QnaDTO getTodayQna(UserDTO user) {
        Optional<Family> familyOpt = familyRepository.findById(user.getFamilyId());
        if(familyOpt.isPresent()){
            Qna qna = familyOpt.get().getQna();
            List<QnaLog> list = qnaLogRepository.findByFamilyIdAndQnaId(familyOpt.get().getId(), qna.getId());
            return new QnaDTO(qna.getId(), qna.getQuestion(), LocalDateTime.now().toLocalDate().atTime(0,0), list.size()==0?0:list.size());
        }
        else throw new ResourceNotFoundException("사용자가 가족에 속해있지 않습니다.", ErrorCode.NOT_FOUND) ;
    }

    @Override
    public QnaDetailDTO getQnaDetail(UserDTO user, Long qnaId) {
        List<QnaLog> qnaLogs = qnaLogRepository.findByFamilyIdAndQnaId(user.getFamilyId(), qnaId);
        Family family = familyRepository.findById(user.getFamilyId()).get();
        if(!qnaLogs.isEmpty()) {
            Qna qna= qnaLogs.get(0).getQna();
            List<QnaAnswerResponseDTO> list= new ArrayList<>();
            qnaLogs.forEach(o-> list.add(QnaAnswerMapStruct.INSTANCE.mapToQnaAnswerDTO(o)));
            return new QnaDetailDTO(qna.getId(),qna.getQuestion(), qnaLogs.get(0).getReg().toLocalDate().atTime(0, 0), list);
        }else if(family.getQna().getId().equals(qnaId)){
            Qna qna = family.getQna();
            return new QnaDetailDTO(qna.getId(),qna.getQuestion(),LocalDateTime.now().toLocalDate().atTime(0, 0),new ArrayList<>());
        }
        else throw new ResourceNotFoundException("백문백답 게시글을 찾을 수 없습니다.", ErrorCode.RESOURCE_GONE);

    }
    @Transactional
    @Override
    public void modifyAnswer(UserDTO user, QnaAnswerModifyRequestDTO qnaAnswerModifyRequestDTO) {
        Optional<QnaLog> qnaLog = qnaLogRepository.findById(qnaAnswerModifyRequestDTO.qnaLogId());
        if(qnaLog.isPresent()){
            QnaLog log = qnaLog.get();
            if(!log.getUser().getId().equals(user.getId())) throw new UnauthorizedRequestException("내 답변만 수정할 수 있습니다.", ErrorCode.MODIFY_ONLY_MINE_ERROR);
            log.setContent(qnaAnswerModifyRequestDTO.content());
        }else throw new ResourceNotFoundException("답변이 존재하지 않습니다.", ErrorCode.NOT_FOUND);
    }

    Integer findAnswerCnt(Long qnaId, List<QnaLog> list){
        return Math.toIntExact(list.stream().filter(o -> o.getQna().getId().equals(qnaId)).count());
    }
    @Scheduled(cron = "1 0 0 * * *",zone = "Asia/Seoul")
    @Async
    @Transactional
    void scheduleQnaFamily(){
        familyRepository.UpdateQnaId();
    }
}
