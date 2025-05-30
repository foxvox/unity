#include <stdio.h> 

void Process();
void Stats(int health, const char* name);
void Swap(int* a, int* b);


void Swap(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

void Stats(int health, const char* name)
{
	//printf("Health: %d,\tName: %s\n", health, name); 
}
void Process()
{
	//printf("나는 Process함수입니다.\n"); 
}

void main()
{
#pragma region 함수 

	// Process(); 	

#pragma endregion 

#pragma region 매개변수 

	int a = 100, b = 200;

	Stats(100, "Slime");
	Stats(200, "Skeleton");
	Stats(300, "Goblin");

	printf("Swap전 => a: %d, b: %d\n", a, b);
	Swap(&a, &b);
	printf("Swap후 => a: %d, b: %d\n", a, b);

#pragma endregion 
}