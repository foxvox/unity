#include <stdio.h>

int main()
{
#pragma region ��Ʈ ������ 
	int x1 = 10; 
	int y1 = 6; 
	int result1 = x1 & y1; // ��Ʈ AND ����

	printf("x1 & y1 = %d\n", result1); // 2 

	x1 = 8; 
	y1 = 12; 
	result1 = x1 | y1; // ��Ʈ OR ����
	printf("x1 | y1 = %d\n", result1); // 12 
#pragma endregion
	
	return 0; 
}