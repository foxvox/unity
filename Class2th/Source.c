#include <stdio.h> 

int stage = 1;
void SetStage(const int cnt)
{
	stage = cnt;
	printf("현재 %d번째 Stage입니다.\n", stage);
	printf("SetStage 함수 내부에서 사용되는 전역변수 &stage: %p\n", &stage);
}

void Increase()
{
	static int score = 0;
	score++;
	printf("score: %d\n", score);
}

int main()
{
#pragma region MEMORY SEGMENT 
#pragma region CODE SEGMENT

#pragma endregion 
#pragma region DATA SEGMENT

#pragma endregion 
#pragma region BSS SEGMENT
	// 프로그램이 실행될 때 초기화가 이루어지지 않은 전역 변수와 
	// 정적 변수가 저장되는 메모리 영역입니다. 
#pragma endregion 
#pragma region STACK SEGMENT
	// 프로그램이 자동으로 사용하는 임시 메모리 영역으로 
	// 함수 호출 시 생성되는 지역 변수와 매개 변수가 저장 되는 메모리 영역입니다. 
#pragma endregion  
#pragma region HEAP SEGMENT
	// 사용자가 직접 메모리 공간을 저장해주는 메모리 영역이며, 
	// 사용하지 않는 경우 사용자가 직접 메모리를 해제해야 되는 메모리 영역입니다. 
#pragma endregion 
#pragma endregion 
#pragma region 변수의 범위 

#pragma region 지역변수
	/*int x = 10;
	printf("x변수의 값은: %d\n", x);
	{
		int x = 20;
		printf("x변수의 값은: %d\n", x);
	}
	printf("x변수의 값은: %d\n", x);*/
#pragma endregion 
#pragma region 전역변수 

	int cnt = 4;
	SetStage(cnt);

	printf("지역변수 &cnt %p\n", &cnt);
	printf("main 함수 내부에서 사용되는 전역변수 &stage %p\n", &stage);

#pragma endregion 		
#pragma region static변수 
	/*int cnt = 10;
	for (int i = 0; i < cnt; i++)
	{
		Increase();
	}*/
#pragma endregion


#pragma endregion 

	return 0;
}