#include <stdio.h>

int main()
{
#pragma region 변수
	//int num = 0; 
	//float real = 0.0f; 
	//char alpha = 'A'; 
	//
	//printf("alpha 변수 값: %c\n", alpha);
	//printf("real 변수 값: %f\n", real);
	//printf("num 변수 값: %d\n", alpha);
	//
	//alpha = 'B'; 
	//num = 200; 
	//real = 7.5f; 
	//
	//printf("alpha 변수 값: %c\n", alpha);
	//printf("real 변수 값: %f\n", real);
	//printf("num 변수 값: %d\n", num);
#pragma endregion 

#pragma region 산술 연산자 
	int variable = 10;
	int sum = 0;
	const int constNum = 5;
	int minus = 0;
	int multi = 0;
	float div = 0.0f;
	int mod = 0;

	sum = variable + 5;
	minus = 70 - constNum;
	multi = variable * constNum;
	div = variable / 2.0f;
	mod = 9 % 3;

	printf("sum: %d\n", sum);
	printf("minus: %d\n", minus);
	printf("multi: %d\n", multi);
	printf("div: %f\n", div);
	printf("mod: %d\n", mod);
#pragma endregion

	return 0;
}