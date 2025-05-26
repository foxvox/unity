#include <stdio.h> 

void main()
{
#pragma region 조건문
#pragma endregion 	
#pragma region 관계 연산자 
	// 두 개의 피연산자의 값을 비교하여 참 또는 거짓을 반환하는 연산자 
	//int state1 = (1 < 2); 
	//int state2 = (1 > 2);
	//int state3 = (1 == 2);
	//int state4 = (1 != 2);
	//int state5 = (1 <= 2);
	//int state6 = (1 >= 2); 

	//printf("state1 = %d\n", state1); // 1(참) 
	//printf("state2 = %d\n", state2); // 0(거짓)
	//printf("state3 = %d\n", state3); // 0(거짓)
	//printf("state4 = %d\n", state4); // 1(참)
	//printf("state5 = %d\n", state5); // 1(참)
	//printf("state6 = %d\n", state6); // 1(참)	
#pragma endregion
#pragma region if 문 

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
#pragma region else if 문

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
#pragma region 논리 연산자 
	/*int num = 100;
	if (num > 50 && num < 200)
	{
		printf("num은 50보다 크고 200보다 작은 수입니다.\n");
	}*/

	/*int score = 50;
	if (score < 60 || score >100)
	{
		printf("낙제입니다.\n");
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
		printf("x가 과연 0일까? %d\n", x);
	}*/
#pragma endregion 
#pragma region 사분면
	/*int x = 3;
	int y = -7;
	if (x > 0 && y > 0)
	{
		printf("제 1사분면\n");
	}
	else if (x < 0 && y >0)
	{
		printf("제 2사분면\n");
	}
	else if (x < 0 && y < 0)
	{
		printf("제 3사분면\n");
	}
	else if (x > 0 && y < 0)
	{
		printf("제 4사분면\n");
	}
	else if (x == 0 && y == 0)
	{
		printf("원점입니다.\n");
	}
	else if (x == 0 && y != 0)
	{
		printf("y축 위에 있습니다.\n");
	}
	else if (x != 0 && y == 0)
	{
		printf("x축 위에 있습니다.\n");
	}
	else
	{
		printf("좌표축 위에 있지 않습니다.\n");

	}*/
#pragma endregion
#pragma region switch문

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
#pragma region continue문
//for (int i = 1; i < 11; i++)
//{ 
//	if (i % 3 == 0) 
//		continue; 
//
//	printf("i 값은: %d\n", i); 
//}
#pragma endregion
}
