#include <stdio.h> 

enum { MAX = 10 };

void main()
{

#pragma region �迭 

	/*int arr[MAX];

	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++)
	{
		arr[i] = (i + 1) * 10;
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	printf("\n");
	int* pArr = &arr[0];
	*pArr = 99;

	for (int i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	printf("\n");
	printf("pArr[1] = %d\n", *(pArr + 1));

	pArr += 1;
	printf("pArr ������ ��: %p\n", pArr);
	printf("arr[1]�� �ּ� ��: %p\n", &arr[1]);*/

	// float container[] = {10.0f, 12.5f, 15.0f, 17.5f};

#pragma endregion 
#pragma region ���ڿ� 

	// ��������� 
	/*const char* word = "Game Over";
	printf("word = %s\n", word);
	word = "Leage Of Leg\0end";
	printf("word = %s\n", word); */

	// �迭�� �̸��� �����ͻ��ó�� �ѹ� �ʱ�ȭ�ϸ� ������ �ȵȴ�. 

	//char name[] = "Alex"; 
	//printf("name�迭�� ��: %s\n", name); 
	//name[0] = 'C'; 
	//printf("name�迭�� ��: %s\n", name); 

	//name[0] = 'A'; 
	//// error name[] = "School"; 

	//printf("\n"); 	

	//int i = 0; 
	//while (name[i] != NULL)
	//{
	//	printf("%c", name[i]); 
	//	i++; 
	//}

	//printf("\n"); 

	//i = 0; 
	//while (name[i] != '\0')
	//{
	//	printf("name[%d] = %c\n", i, name[i]); 	
	//	i++; 
	//}

#pragma endregion
#pragma region �������迭 

//int arr[3][4] = { {1, 2, 3, 4},
//			      {5, 6, 7, 8},
//			      {9, 10, 11, 12} 
//				}; 

//for (int j = 0; j < 3; j++)
//{
//	for (int i = 0; i < 4; i++)
//	{
//		printf("arr[%d][%d] = % d\t", j, i, arr[j][i]); 
//	}
//	printf("\n"); 
//}

#pragma endregion

}