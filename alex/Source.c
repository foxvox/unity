#include <stdio.h> 
#include <stdarg.h> 

void Recursion(int cnt);  
inline void Collision();
double Average(int cnt, ...); 
void Provide(); 

void Recursion(int cnt)
{ 
	if (cnt < 1)
		return; 

	printf("Recursion %d\n", cnt); 	

	Recursion(cnt - 1);  
} 
inline void Collision()
{
	printf("Collision\n"); 
} 
double Average(int cnt, ...)
{
	if (cnt != 5) 
	{
		printf("Error: 정확히 5개의 숫자를 입력해야 합니다.\n");
		return -1.0;
	}

	va_list args;
	double sum = 0.0;

	va_start(args, cnt); // 가변 인수 목록 시작
	for (int i = 0; i < cnt; i++) 
	{
		sum += va_arg(args, int); // 가변 인수 가져오기 		
	}
	va_end(args); // 가변 인수 목록 종료

	return sum / cnt; // 평균 계산
}
void Provide()
{
	printf("Provide\n");  
}

void main()
{ 
#pragma region Recursion 
	/*int i = 3;
	Recursion(i);*/
#pragma endregion 	
#pragma region InlineFunction 
	// Collision(); 
#pragma endregion 
#pragma region 가변인수목록 
	// 고정되어 있는 매개변수 외에 개수가 정해지지 않은 
	// 인수를 추가로 받을 수 있는 인수입니다. 

	// va_list: 가변인수목록의 메모리 주소를 가리키는 포인터 변수 
	// va_start: 가변인수목록을 가져올 수 있도록 포인터를 설정하는 함수  
	// va_arg: 가변인수목록에서 특정 자료형의 크기만큼 값을 가져오는 함수 
	// va_end: 가변인수목록을 다 사용했을 때 포인터를 NULL로 초기화하는 함수  

	// printf("%.2lf\n", Average(5, 10, 20, 30, 40, 50)); 	

#pragma endregion 
#pragma region 함수포인터 
	void (*fpMy)(); 
	fpMy = Provide; 
	fpMy();  
#pragma endregion

}