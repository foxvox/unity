#include <stdio.h>
#include <wchar.h>   // �����ڵ�(���̵� ����) ���� ���
#include <locale.h>

void main()
{
    // UTF-8 ���ڵ� ����
    system("chcp 65001");
    setlocale(LC_ALL, "");

#pragma region �ƽ�Ű�ڵ�
    //// ���ڿ� �ƽ�Ű�ڵ� �� ��� ����
    //char ch = 'A';
    //printf("����: %c, �ƽ�Ű�ڵ�: %d\n", ch, ch);

    //ch = 'Z';
    //printf("����: %c, �ƽ�Ű�ڵ�: %d\n", ch, ch);

    //ch = 'a';
    //printf("����: %c, �ƽ�Ű�ڵ�: %d\n", ch, ch);

    //ch = '0';
    //printf("����: %c, �ƽ�Ű�ڵ�: %d\n", ch, ch);

    //// �ƽ�Ű�ڵ� ���� ���ڷ� ���
    //int code = 66;
    //printf("�ƽ�Ű�ڵ�: %d, ����: %c\n", code, code);
#pragma endregion 

#pragma region �����ڵ� 
    // �����ڵ�(���̵� ����) ��� ����
    wchar_t uni_ch = L'��'; // �ѱ� '��' �����ڵ� ����
    wprintf(L"�����ڵ� ����: %lc, �ڵ尪: %x\n", uni_ch, uni_ch);

    wchar_t uni_str[] = L"�ȳ��ϼ���!";
    wprintf(L"�����ڵ� ���ڿ�: %ls\n", uni_str);
#pragma endregion
}