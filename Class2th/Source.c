#include <stdio.h> 

int stage = 1;
void SetStage(const int cnt)
{
	stage = cnt;
	printf("���� %d��° Stage�Դϴ�.\n", stage);
	printf("SetStage �Լ� ���ο��� ���Ǵ� �������� &stage: %p\n", &stage);
}

void Increase()
{
	static int score = 0;
	score++;
	printf("score: %d\n", score);
}

int main()
{
#pragma region MEMORY SEGMENT 
#pragma region CODE SEGMENT

#pragma endregion 
#pragma region DATA SEGMENT

#pragma endregion 
#pragma region BSS SEGMENT
	// ���α׷��� ����� �� �ʱ�ȭ�� �̷������ ���� ���� ������ 
	// ���� ������ ����Ǵ� �޸� �����Դϴ�. 
#pragma endregion 
#pragma region STACK SEGMENT
	// ���α׷��� �ڵ����� ����ϴ� �ӽ� �޸� �������� 
	// �Լ� ȣ�� �� �����Ǵ� ���� ������ �Ű� ������ ���� �Ǵ� �޸� �����Դϴ�. 
#pragma endregion  
#pragma region HEAP SEGMENT
	// ����ڰ� ���� �޸� ������ �������ִ� �޸� �����̸�, 
	// ������� �ʴ� ��� ����ڰ� ���� �޸𸮸� �����ؾ� �Ǵ� �޸� �����Դϴ�. 
#pragma endregion 
#pragma endregion 
#pragma region ������ ���� 

#pragma region ��������
	/*int x = 10;
	printf("x������ ����: %d\n", x);
	{
		int x = 20;
		printf("x������ ����: %d\n", x);
	}
	printf("x������ ����: %d\n", x);*/
#pragma endregion 
#pragma region �������� 

	int cnt = 4;
	SetStage(cnt);

	printf("�������� &cnt %p\n", &cnt);
	printf("main �Լ� ���ο��� ���Ǵ� �������� &stage %p\n", &stage);

#pragma endregion 		
#pragma region static���� 
	/*int cnt = 10;
	for (int i = 0; i < cnt; i++)
	{
		Increase();
	}*/
#pragma endregion


#pragma endregion 

	return 0;
}