#include <stdio.h>

void main()
{
#pragma region �ݺ��� 
	//for (int i = 0; i < 10; i++)
	//{
	//	if (i == 5)
	//		break;
	//	printf("%d ", i); // 0 1 2 3 4 
	//}
#pragma endregion 

#pragma region ���� ������ 
	//int a = 0; 
	//int b = ++a; 
	//printf("a : %d, b : %d\n", a, b); // a : 1, b : 1 
	//b = --a; 
	//printf("a : %d, b : %d\n", a, b); // a : 0, b : 0 
#pragma endregion	

#pragma region ���� ���� ������ 
	//int a = 0;
	//int b = 0; 
	//b = a++; 
	//printf("a : %d, b : %d\n", a, b); 
#pragma endregion

#pragma region while�� 
	//int a = 0;
	//int b = 0; 

	//while (a < 5)
	//{		
	//	b = a++; 
	//	printf("a : %d, b : %d\n", a, b);  
	//}
#pragma endregion 
#pragma region do while �� 
/*	int a = 0;
	int b = 0;
	do
	{
		b = a++;
		printf("a : %d, b : %d\n", a, b);
	} while (a < 5);*/
#pragma endregion 
#pragma region nested for��
	/*for (int i = 0; i < 3; i++)
	{
		printf("i : %d\n\n", i);
		for (int j = 0; j < 3; j++)
		{
			printf("j : %d\n", j);
		}
		printf("\n");
	}*/
#pragma endregion
}