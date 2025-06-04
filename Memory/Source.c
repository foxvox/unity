#include <stdio.h>

int global_var = 10;  // 전역변수

void testFunction() 
{
    int local_var = 20;  // 지역변수
    printf("전역변수 주소: %p\n", (void*)&global_var);
    printf("지역변수 주소: %p\n", (void*)&local_var);
}

int main() 
{
    testFunction();
    return 0;
}