#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main()
{
#pragma region �ǻ糭�� 
	// rand(): 0~32767 ������ ������ ���� ��ȯ�ϴ� �Լ��Դϴ�. 	

	srand(time(NULL)); // ���� �ð��� �������� Seed ���� 
	int randNum = rand();
	int myNum = randNum % 10;
	printf("���ڸ� ������ ��: %d\n", myNum); // ���� ��� 

#pragma endregion 

	return 0;
}