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
	//printf("���� Process�Լ��Դϴ�.\n"); 
}

void main()
{
#pragma region �Լ� 

	// Process(); 	

#pragma endregion 

#pragma region �Ű����� 

	int a = 100, b = 200;

	Stats(100, "Slime");
	Stats(200, "Skeleton");
	Stats(300, "Goblin");

	printf("Swap�� => a: %d, b: %d\n", a, b);
	Swap(&a, &b);
	printf("Swap�� => a: %d, b: %d\n", a, b);

#pragma endregion 
}