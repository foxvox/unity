#include <stdio.h>

int global_var = 10;  // ��������

void testFunction() 
{
    int local_var = 20;  // ��������
    printf("�������� �ּ�: %p\n", (void*)&global_var);
    printf("�������� �ּ�: %p\n", (void*)&local_var);
}

int main() 
{
    testFunction();
    return 0;
}