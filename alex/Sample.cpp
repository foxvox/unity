#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIGNATURES 3

// 간단한 악성 코드 시그니처 예제
const char* malware_signatures[MAX_SIGNATURES] = {
    "malicious_code_1",
    "virus_signature_ABC",
    "trojan_XYZ"
};

// 파일에서 악성 코드 시그니처 검사
int scan_file(const char* filename) {
    FILE* file = NULL;

    // 안전한 fopen_s 사용
    if (fopen_s(&file, filename, "r") != 0 || file == NULL) {
        perror("파일을 열 수 없습니다");
        return -1;
    }

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file)) {
        for (int i = 0; i < MAX_SIGNATURES; i++) {
            if (strstr(buffer, malware_signatures[i])) {
                printf("[경고] 감염된 파일 발견: %s\n", filename);
                fclose(file);
                return 1;
            }
        }
    }

    fclose(file);
    return 0;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("사용법: %s <파일 이름>\n", argv[0]);
        return 1;
    }

    int result = scan_file(argv[1]);
    if (result == 0) {
        printf("파일이 안전합니다: %s\n", argv[1]);
    }

    return 0;
}
