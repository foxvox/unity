//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_SIGNATURES 3
//
//// ������ �Ǽ� �ڵ� �ñ״�ó ����
//const char* malware_signatures[MAX_SIGNATURES] = {
//    "malicious_code_1",
//    "virus_signature_ABC",
//    "trojan_XYZ"
//};
//
//// ���Ͽ��� �Ǽ� �ڵ� �ñ״�ó �˻�
//int scan_file(const char* filename) 
//{
//    FILE* stream; 
//    errno_t err; 
//
//    err = fopen_s(&stream, filename, "r");
//    if (err) 
//    {
//        perror("������ �� �� �����ϴ�");
//        return -1;
//    }
//
//    char buffer[1024];
//    while (fgets(buffer, sizeof(buffer), stream)) {
//        for (int i = 0; i < MAX_SIGNATURES; i++) {
//            if (strstr(buffer, malware_signatures[i])) {
//                printf("[���] ������ ���� �߰�: %s\n", filename);
//                fclose(stream);
//                return 1;
//            }
//        }
//    }
//
//    fclose(stream);
//    return 0;
//}
//
//int main(int argc, char* argv[]) 
//{
//    if (argc < 2) 
//    {
//        printf("����: %s <���� �̸�>\n", argv[0]);
//        return 1;
//    }
//
//    int result = scan_file(argv[1]);
//    if (result == 0) {
//        printf("������ �����մϴ�: %s\n", argv[1]);
//    }
//
//    return 0;
//}
