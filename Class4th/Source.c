#include <stdio.h> 

void main()
{
#pragma region ���ǹ�
#pragma endregion 	
#pragma region ���� ������ 
	// �� ���� �ǿ������� ���� ���Ͽ� �� �Ǵ� ������ ��ȯ�ϴ� ������ 
	//int state1 = (1 < 2); 
	//int state2 = (1 > 2);
	//int state3 = (1 == 2);
	//int state4 = (1 != 2);
	//int state5 = (1 <= 2);
	//int state6 = (1 >= 2); 

	//printf("state1 = %d\n", state1); // 1(��) 
	//printf("state2 = %d\n", state2); // 0(����)
	//printf("state3 = %d\n", state3); // 0(����)
	//printf("state4 = %d\n", state4); // 1(��)
	//printf("state5 = %d\n", state5); // 1(��)
	//printf("state6 = %d\n", state6); // 1(��)	
#pragma endregion
#pragma region if �� 

	/*int hp = 100;
	while (1)
	{
		hp -= 10;
		if (hp <= 0)
		{
			printf("Game Over\n");
			break;
		}
		else
		{
			printf("HP: %d\n", hp);
		}
	}*/

#pragma endregion
#pragma region else if ��

	/*int num = 7;

	if (num > 0)
	{
		printf("Positive\n");
	}
	else if (num == 2)
	{
		printf("Negative\n");
	}
	else
	{
		printf("Zero\n");
	}*/
#pragma endregion 
#pragma region �� ������ 
	/*int num = 100;
	if (num > 50 && num < 200)
	{
		printf("num�� 50���� ũ�� 200���� ���� ���Դϴ�.\n");
	}*/

	/*int score = 50;
	if (score < 60 || score >100)
	{
		printf("�����Դϴ�.\n");
	}

	int power = 0;
	if (!power)
	{
		printf("power is off");
	}
	else
	{
		printf("power is on");
	}*/

	/*int x = 0;
	if (x == 0 || ++x)
	{
		printf("x�� ���� 0�ϱ�? %d\n", x);
	}*/
#pragma endregion 
#pragma region ��и�
	/*int x = 3;
	int y = -7;
	if (x > 0 && y > 0)
	{
		printf("�� 1��и�\n");
	}
	else if (x < 0 && y >0)
	{
		printf("�� 2��и�\n");
	}
	else if (x < 0 && y < 0)
	{
		printf("�� 3��и�\n");
	}
	else if (x > 0 && y < 0)
	{
		printf("�� 4��и�\n");
	}
	else if (x == 0 && y == 0)
	{
		printf("�����Դϴ�.\n");
	}
	else if (x == 0 && y != 0)
	{
		printf("y�� ���� �ֽ��ϴ�.\n");
	}
	else if (x != 0 && y == 0)
	{
		printf("x�� ���� �ֽ��ϴ�.\n");
	}
	else
	{
		printf("��ǥ�� ���� ���� �ʽ��ϴ�.\n");

	}*/
#pragma endregion
#pragma region switch��

	//int state = 7; 
	//switch (state)
	//{
	//case 0: 
	//	printf("Idle State"); 
	//	break;
	//case 1:
	//	printf("Attack State"); 
	//	break; 
	//case 2:
	//	printf("Die State"); 
	//	break; 
	//default:
	//	printf("Exception"); 
	//	break; 
	//}

#pragma endregion
#pragma region continue��
//for (int i = 1; i < 11; i++)
//{ 
//	if (i % 3 == 0) 
//		continue; 
//
//	printf("i ����: %d\n", i); 
//}
#pragma endregion
}
