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
	int storage = 20;
	printf("변경 전 packet 변수의 값: %d\n", packet);
	printf("pt 포인터가 가리키는 값: %d\n", *pt);
	printf("packet 변수의 주소: %p\n", (void*)&packet);
	printf("\n");
	*pt = 99;
	printf("변경된 packet 변수의 값: %d\n", packet);
	printf("pt 포인터의 값: %p\n", (void*)pt);
	printf("pt 포인터의 주소: %p\n", (void*)&pt);
	printf("pt 포인터가 가리키는 값: %d\n", *pt);
	printf("pt 포인터의 크기는 %zu byte\n", sizeof(pt));
	printf("\n");
	pt = &storage;
	printf("storage 변수의 주소: %p\n", &storage);
	printf("pt 포인터의 값: %p\n", (void*)pt);
	printf("pt 포인터가 가리키는 값: %d\n", *pt); */
#pragma endregion 
#pragma region 상수지시포인터
	//int height = 10; 
	//int width = 20; 

	//const int* cpt = &height; 	
	//printf("height: %d\tconst int* cpt = &height\n", height);
	//printf("*cpt: %d\n", *cpt); 
	//height = 100;	
	//// *cpt = 1000; *cpt는 rvalue라서 error가 난다. 
	//// cosnt* char = "love"; 읽기 전용으로 사용되어야 한다. 
	//printf("height = 100\n"); 
	//printf("*cpt: %d\n", *cpt);	

	//printf("\n"); 
	//
	//cpt = &width; 
	//printf("width: %d\tconst int* cpt = &width\n", width);
	//printf("*cpt: %d\n", *cpt); 		
	//width = 200; 
	//printf("width = 200\n"); 
	//printf("*cpt: %d\n", *cpt); 
#pragma endregion
#pragma region 포인터상수

	// 포인터 변수가 가리키고 있는 주소값을 변경할 수 없도록 지정되어 있는 포인터입니다. 

	/*int x = 10;
	int y = 20;

	int* const ptConst = &x;
	printf("변경전=> x: %d, y: %d\n", x, y);
	printf("ptConst: %p\n", ptConst);
	printf("&x: %p\n", &x);
	printf("\n");
	*ptConst = 99;
	printf("*ptConst = 99;\n");
	printf("변경후=> x: %d, y: %d\n", x, y);
	printf("ptConst: %p\n", ptConst);
	printf("&x: %p\n", &x);*/

	// pt = &y; 포인터상수라서 한번 초기화 되면 주소값 변경이 안 된다. 

#pragma endregion 
#pragma region 포인터배열 vs 배열포인터 

	//// 1. 포인터 배열 (Array of Pointers)
	//// 여러 개의 포인터(주소)를 저장하는 배열
	//int a = 10, b = 20, c = 30;
	//int* ptrArr[3]; // int형 포인터 3개로 이루어진 배열
	//ptrArr[0] = &a;
	//ptrArr[1] = &b;
	//ptrArr[2] = &c;

	//printf("포인터 배열 예시:\n");
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("ptrArr[%d]가 가리키는 값: %d\n", i, *ptrArr[i]);
	//}

	//printf("\n");

	//// 2. 배열 포인터 (Pointer to Array)
	//// 배열 전체(연속된 메모리 블록)의 시작 주소를 저장하는 포인터
	//int arr[3] = { 1, 2, 3 };
	//int (*arrPtr)[3] = &arr; // int형 3개짜리 배열을 가리키는 포인터

	//printf("배열 포인터 예시:\n");
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("(*arrPtr)[%d]의 값: %d\n", i, (*arrPtr)[i]);
	//}

#pragma endregion
#pragma region 범용포인터 

//void* vp = 0; 
//printf("sizeof(vp): %zu\n\n", sizeof(vp)); 
//
//char cData = 'A'; 
//int iData = 10; 
//float fData = 36.5f;  
//
//(char*)vp = &cData; 
//printf("변경전=> *(char*)vp: %c\n", *(char*)vp); 
//*(char*)vp = 'B'; 
//printf("변경후=> *(char*)vp: %c\n", *(char*)vp);
//printf("cData: %c\n\n", cData); 
//
//(int*)vp = &iData; 
//printf("변경전=> *(int*)vp: %d\n", *(int*)vp); 
//*(int*)vp = 20; 
//printf("변경후=> *(int*)vp: %d\n", *(int*)vp);
//printf("iData: %d\n\n", iData);
//
//(float*)vp = &fData; 
//printf("변경전=> *(float*)vp: %f\n", *(float*)vp);
//*(float*)vp = 7.5f; 
//printf("변경후=> *(float*)vp: %f\n", *(float*)vp); 
//printf("fData: %f\n\n", fData); 

#pragma endregion
}