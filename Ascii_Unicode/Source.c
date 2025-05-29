#include <stdio.h>
#include <wchar.h>   // 유니코드(와이드 문자) 관련 헤더
#include <locale.h>

void main()
{
    // UTF-8 인코딩 설정
    system("chcp 65001");
    setlocale(LC_ALL, "");

#pragma region 아스키코드
    //// 문자와 아스키코드 값 출력 예제
    //char ch = 'A';
    //printf("문자: %c, 아스키코드: %d\n", ch, ch);

    //ch = 'Z';
    //printf("문자: %c, 아스키코드: %d\n", ch, ch);

    //ch = 'a';
    //printf("문자: %c, 아스키코드: %d\n", ch, ch);

    //ch = '0';
    //printf("문자: %c, 아스키코드: %d\n", ch, ch);

    //// 아스키코드 값을 문자로 출력
    //int code = 66;
    //printf("아스키코드: %d, 문자: %c\n", code, code);
#pragma endregion 

#pragma region 유니코드 
    // 유니코드(와이드 문자) 출력 예제
    wchar_t uni_ch = L'가'; // 한글 '가' 유니코드 문자
    wprintf(L"유니코드 문자: %lc, 코드값: %x\n", uni_ch, uni_ch);

    wchar_t uni_str[] = L"안녕하세요!";
    wprintf(L"유니코드 문자열: %ls\n", uni_str);
#pragma endregion
}