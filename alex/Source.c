#include <stdio.h>

void main()
{
#pragma region �ּ� ������ 
	/*int data = 10;
	printf("data ������ �ּ�: %p\n", (void*)&data);*/
#pragma endregion 
#pragma region ������ ������
	/*int data = 10;
	int* ptr = &data;
	printf("data ������ ��: %d\n", *ptr);*/
#pragma endregion 
#pragma region scanf_s �Լ� 
	// scanf_s �Լ��� C11 ǥ�ؿ��� ���Ե� �Լ���, scanf �Լ��� ���������� �������� ������ �Է� ������ ũ�⸦ ��������� ������ �� �ֽ��ϴ�. 
	//int data = 0;
	//printf("������ �Է��ϼ���: "); 
	//scanf_s("%d", &data); // data ������ �ּҸ� �����Ͽ� �Է��� �޽��ϴ�. 
	//printf("�Էµ� ����: %d\n", data);
#pragma endregion
#pragma region ������ ���� 
	/*int packet = 10; 
	int* pt = &packet; 

	printf("packet ������ ��: %d\n", *pt);
	printf("packet ������ �ּ�: %p\n", (void*)&packet);	

	*pt = 20; 
	printf("����� packet ������ ��: %d\n", packet);
	printf("pt �������� ��: %p\n", (void*)pt);	
	printf("pt �������� �ּ�: %p\n", (void*)&pt);
	printf("pt �����Ͱ� ����Ű�� ��: %d\n", *pt);*/
#pragma endregion


}