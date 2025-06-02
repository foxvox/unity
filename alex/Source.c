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
		printf("Error: ��Ȯ�� 5���� ���ڸ� �Է��ؾ� �մϴ�.\n");
		return -1.0;
	}

	va_list args;
	double sum = 0.0;

	va_start(args, cnt); // ���� �μ� ��� ����
	for (int i = 0; i < cnt; i++) 
	{
		sum += va_arg(args, int); // ���� �μ� �������� 		
	}
	va_end(args); // ���� �μ� ��� ����

	return sum / cnt; // ��� ���
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
#pragma region �����μ���� 
	// �����Ǿ� �ִ� �Ű����� �ܿ� ������ �������� ���� 
	// �μ��� �߰��� ���� �� �ִ� �μ��Դϴ�. 

	// va_list: �����μ������ �޸� �ּҸ� ����Ű�� ������ ���� 
	// va_start: �����μ������ ������ �� �ֵ��� �����͸� �����ϴ� �Լ�  
	// va_arg: �����μ���Ͽ��� Ư�� �ڷ����� ũ�⸸ŭ ���� �������� �Լ� 
	// va_end: �����μ������ �� ������� �� �����͸� NULL�� �ʱ�ȭ�ϴ� �Լ�  

	// printf("%.2lf\n", Average(5, 10, 20, 30, 40, 50)); 	

#pragma endregion 
#pragma region �Լ������� 
	void (*fpMy)(); 
	fpMy = Provide; 
	fpMy();  
#pragma endregion

}