#include <stdio.h> 

#define SIZE 30 // 매크로 정의, SIZE는 30으로 정의됨

void main()
{
#pragma region 자료형 변환 

	//char charactor = 'A'; // char 자료형 
	//int int_num1 = 10;
	//int int_num2 = 3; // int 자료형 
	//float float_num = 7.4f;


	//printf("char 자료형의 크기: %zu\n", sizeof(char));
	//printf("int 자료형의 크기: %zu\n", sizeof(int));
	//printf("float 자료형의 크기: %zu\n", sizeof(float));
	//printf("double 자료형의 크기: %zu\n", sizeof(double));
	//printf("long 자료형의 크기: %zu\n", sizeof(long));

	//// 정수의 승격 
	//printf("charactor + int = %zu\n", sizeof(charactor + int_num1)); // char는 int로 승격됨  

	///*char, short 등 작은 크기의 정수형이 연산에 사용되면
	//자동으로 int(또는 unsigned int)로 변환되어 연산이 이루어집니다.
	//이를 정수의 승격(integer promotion)이라고 부릅니다.
	//*/

	//printf("sizeof(i_num + f_num) = %zu\n", sizeof(int_num1 + float_num)); 
	//printf("sizeof(i_num) = %zu\n", sizeof(int_num1)); 
	//printf("sizeof(f_num) = %zu\n", sizeof(float_num));	
	//printf("sizeof(i_num + 10) = %zu\n", sizeof(int_num1 + 10));
	//printf("sizeof(f_num + 10.0) = %zu\n", sizeof(float_num + 10.0)); 

	//float_num = (float)(int_num1 / int_num2);   // int_num1과 int_num2는 int 자료형이므로 정수 나눗셈이 수행됨 
	//printf("int_num1 / int_num2 = %f\n", float_num); // int를 float로 승격하여 계산됨 

	//float position = (float)((float)int_num1 / (float)int_num2); 
	//printf("position = %f\n", position); // x와 y는 int 자료형이므로 정수 나눗셈이 수행됨 

#pragma endregion 
#pragma region 전처리기
#pragma endregion
#pragma region 매크로
	//printf("SIZE의 값: %d\n", SIZE); // 매크로 SIZE의 값 출력 
	//printf("channel의 값: %d\n", channel);
#pragma endregion

}
