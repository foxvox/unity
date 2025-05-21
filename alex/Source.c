#include <stdio.h>

int main()
{
#pragma region 비트 연산자 
	int x1 = 10; 
	int y1 = 6; 
	int result1 = x1 & y1; // 비트 AND 연산

	printf("x1 & y1 = %d\n", result1); // 2 

	x1 = 8; 
	y1 = 12; 
	result1 = x1 | y1; // 비트 OR 연산
	printf("x1 | y1 = %d\n", result1); // 12 
#pragma endregion
	
	return 0; 
}