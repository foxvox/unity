#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main()
{
#pragma region 의사난수 
	// rand(): 0~32767 사이의 난수의 값을 반환하는 함수입니다. 	

	srand(time(NULL)); // 현재 시간을 기준으로 Seed 설정 
	int randNum = rand();
	int myNum = randNum % 10;
	printf("한자리 랜덤한 수: %d\n", myNum); // 난수 출력 

#pragma endregion 

	return 0;
}