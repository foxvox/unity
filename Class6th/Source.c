#include <stdio.h>

void main()
{
#pragma region �ּ� ������ 
	/*int data = 10;
	printf("data ������ �ּ�: %p\n", (void*)&data);*/
#pragma endregion 
#pragma region ������ ������
	/*int data = 10;
	int* ptr = &data;
	printf("data ������ ��: %d\n", *ptr);*/
#pragma endregion 
#pragma region scanf_s �Լ� 
	// scanf_s �Լ��� C11 ǥ�ؿ��� ���Ե� �Լ���, scanf �Լ��� ���������� �������� ������ �Է� ������ ũ�⸦ ��������� ������ �� �ֽ��ϴ�. 
	//int data = 0;
	//printf("������ �Է��ϼ���: "); 
	//scanf_s("%d", &data); // data ������ �ּҸ� �����Ͽ� �Է��� �޽��ϴ�. 
	//printf("�Էµ� ����: %d\n", data);
#pragma endregion
#pragma region ������ ���� 
	/*int packet = 10;
	int* pt = &packet;
	int storage = 20;
	printf("���� �� packet ������ ��: %d\n", packet);
	printf("pt �����Ͱ� ����Ű�� ��: %d\n", *pt);
	printf("packet ������ �ּ�: %p\n", (void*)&packet);
	printf("\n");
	*pt = 99;
	printf("����� packet ������ ��: %d\n", packet);
	printf("pt �������� ��: %p\n", (void*)pt);
	printf("pt �������� �ּ�: %p\n", (void*)&pt);
	printf("pt �����Ͱ� ����Ű�� ��: %d\n", *pt);
	printf("pt �������� ũ��� %zu byte\n", sizeof(pt));
	printf("\n");
	pt = &storage;
	printf("storage ������ �ּ�: %p\n", &storage);
	printf("pt �������� ��: %p\n", (void*)pt);
	printf("pt �����Ͱ� ����Ű�� ��: %d\n", *pt); */
#pragma endregion 
#pragma region �������������
	//int height = 10; 
	//int width = 20; 

	//const int* cpt = &height; 	
	//printf("height: %d\tconst int* cpt = &height\n", height);
	//printf("*cpt: %d\n", *cpt); 
	//height = 100;	
	//// *cpt = 1000; *cpt�� rvalue�� error�� ����. 
	//// cosnt* char = "love"; �б� �������� ���Ǿ�� �Ѵ�. 
	//printf("height = 100\n"); 
	//printf("*cpt: %d\n", *cpt);	

	//printf("\n"); 
	//
	//cpt = &width; 
	//printf("width: %d\tconst int* cpt = &width\n", width);
	//printf("*cpt: %d\n", *cpt); 		
	//width = 200; 
	//printf("width = 200\n"); 
	//printf("*cpt: %d\n", *cpt); 
#pragma endregion
#pragma region �����ͻ��

	// ������ ������ ����Ű�� �ִ� �ּҰ��� ������ �� ������ �����Ǿ� �ִ� �������Դϴ�. 

	/*int x = 10;
	int y = 20;

	int* const ptConst = &x;
	printf("������=> x: %d, y: %d\n", x, y);
	printf("ptConst: %p\n", ptConst);
	printf("&x: %p\n", &x);
	printf("\n");
	*ptConst = 99;
	printf("*ptConst = 99;\n");
	printf("������=> x: %d, y: %d\n", x, y);
	printf("ptConst: %p\n", ptConst);
	printf("&x: %p\n", &x);*/

	// pt = &y; �����ͻ���� �ѹ� �ʱ�ȭ �Ǹ� �ּҰ� ������ �� �ȴ�. 

#pragma endregion 
#pragma region �����͹迭 vs �迭������ 

	//// 1. ������ �迭 (Array of Pointers)
	//// ���� ���� ������(�ּ�)�� �����ϴ� �迭
	//int a = 10, b = 20, c = 30;
	//int* ptrArr[3]; // int�� ������ 3���� �̷���� �迭
	//ptrArr[0] = &a;
	//ptrArr[1] = &b;
	//ptrArr[2] = &c;

	//printf("������ �迭 ����:\n");
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("ptrArr[%d]�� ����Ű�� ��: %d\n", i, *ptrArr[i]);
	//}

	//printf("\n");

	//// 2. �迭 ������ (Pointer to Array)
	//// �迭 ��ü(���ӵ� �޸� ���)�� ���� �ּҸ� �����ϴ� ������
	//int arr[3] = { 1, 2, 3 };
	//int (*arrPtr)[3] = &arr; // int�� 3��¥�� �迭�� ����Ű�� ������

	//printf("�迭 ������ ����:\n");
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("(*arrPtr)[%d]�� ��: %d\n", i, (*arrPtr)[i]);
	//}

#pragma endregion
#pragma region ���������� 

//void* vp = 0; 
//printf("sizeof(vp): %zu\n\n", sizeof(vp)); 
//
//char cData = 'A'; 
//int iData = 10; 
//float fData = 36.5f;  
//
//(char*)vp = &cData; 
//printf("������=> *(char*)vp: %c\n", *(char*)vp); 
//*(char*)vp = 'B'; 
//printf("������=> *(char*)vp: %c\n", *(char*)vp);
//printf("cData: %c\n\n", cData); 
//
//(int*)vp = &iData; 
//printf("������=> *(int*)vp: %d\n", *(int*)vp); 
//*(int*)vp = 20; 
//printf("������=> *(int*)vp: %d\n", *(int*)vp);
//printf("iData: %d\n\n", iData);
//
//(float*)vp = &fData; 
//printf("������=> *(float*)vp: %f\n", *(float*)vp);
//*(float*)vp = 7.5f; 
//printf("������=> *(float*)vp: %f\n", *(float*)vp); 
//printf("fData: %f\n\n", fData); 

#pragma endregion
}