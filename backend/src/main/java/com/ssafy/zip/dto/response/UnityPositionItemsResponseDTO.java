package com.ssafy.zip.dto.response;

import java.util.List;

public record UnityPositionItemsResponseDTO(Long id, List<UnityItemResponseDTO> itemList) {
}
