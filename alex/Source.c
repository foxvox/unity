#include <stdio.h>

void main()
{
#pragma region 주소 연산자 
	/*int data = 10;
	printf("data 변수의 주소: %p\n", (void*)&data);*/
#pragma endregion 
#pragma region 포인터 연산자
	/*int data = 10;
	int* ptr = &data;
	printf("data 변수의 값: %d\n", *ptr);*/
#pragma endregion 
#pragma region scanf_s 함수 
	// scanf_s 함수는 C11 표준에서 도입된 함수로, scanf 함수와 유사하지만 보안적인 이유로 입력 버퍼의 크기를 명시적으로 지정할 수 있습니다. 
	//int data = 0;
	//printf("정수를 입력하세요: "); 
	//scanf_s("%d", &data); // data 변수의 주소를 전달하여 입력을 받습니다. 
	//printf("입력된 정수: %d\n", data);
#pragma endregion
#pragma region 포인터 변수 
	/*int packet = 10; 
	int* pt = &packet; 

	printf("packet 변수의 값: %d\n", *pt);
	printf("packet 변수의 주소: %p\n", (void*)&packet);	

	*pt = 20; 
	printf("변경된 packet 변수의 값: %d\n", packet);
	printf("pt 포인터의 값: %p\n", (void*)pt);	
	printf("pt 포인터의 주소: %p\n", (void*)&pt);
	printf("pt 포인터가 가리키는 값: %d\n", *pt);*/
#pragma endregion


}