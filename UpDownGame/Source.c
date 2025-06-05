#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <Windows.h> 
#include <locale.h> 

void Shuffle(int array[], int size)
{
	int rn = 0;
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		rn = rand() % size;
		temp = array[rn];
		array[rn] = array[i];
		array[i] = temp;
	}
} 

void SetColor(int color) 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void ViewHeart(int cnt)
{	
	printf("Health: "); 
	SetColor(12);
	for (int i = 0; i < cnt; i++)
	{
		printf("♡ "); 
	}
	SetColor(7);
	printf("\n"); 
}

int main()
{
#pragma region 의사난수 
	// rand(): 0~32767 사이의 난수의 값을 반환하는 함수입니다. 	
	/*srand(time(NULL));
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	Shuffle(array, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("array[%d] = %d\n", i, array[i]);
	}*/
#pragma endregion 
#pragma region UpDownGame 

	srand((unsigned int)time(NULL));
	int secret = 0, guess = 0, attempts = 0, lifeCnt = 0; 
	const int max_attempts = 5;
	secret = (rand() % 50) + 1; 
	
	printf("1부터 50 사이의 숫자를 맞혀보세요! (최대 %d번 시도 가능)\n", max_attempts);	

	while (attempts < max_attempts)
	{
		lifeCnt = max_attempts - attempts; 
		
		ViewHeart(lifeCnt); 
		printf("숫자 입력: ");
		scanf_s("%d", &guess);
		attempts++; 


		if (guess < secret)
		{
			printf("UP!\n"); 
		}
		else if (guess > secret)
		{
			printf("DOWN!\n"); 
		}
		else
		{
			printf("정답입니다! 시도 횟수: %d\n", attempts); 
			printf("Victory!\n"); 
			return 0;
		} 
	}
	printf("Defeat! 정답은 %d였습니다.\n", secret); 
	system("pause");
#pragma endregion

	return 0;
}