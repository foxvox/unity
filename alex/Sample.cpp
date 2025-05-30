#include <iostream>

void Swap(int& a, int& b); 

void Swap(int& a, int& b)
{
	int temp = 0; 
	temp = a; 
	a = b; 
	b = temp; 
}

int main()
{
	int a = 10, b = 20; 

	printf("SwapÀü => %d, %d\n", a, b); 
	Swap(a, b); 
	printf("SwapÈÄ => %d, %d\n", a, b);  

	return 0; 
}