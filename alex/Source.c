#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ũ�Ⱑ 
// ���� ū �ڷ����� ����� �ǵ��� �����˴ϴ�.  

// | char(1) | padding(3) | int(4) | double(8) | <== 16 byte �޸𸮰� ������.  
/* typedef struct tagCard
{
	char grade;
	int health;
	double attack;
} Card; */

// | char(1) | padding(7) | double(8) | int(4) | padding(4) | <== 24 byte �޸𸮰� ������. 
/* typedef struct tagCard
{
	char grade;
	double attack;
	int health;
} Card; */ 

typedef struct tagPoint
{
	int x;
	int y; 
} Point; 

typedef struct tagNode
{
	int data; 
	struct Node* next; 
} Node; 

int main()
{

#pragma region ����ü 
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ���� 
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�. 
	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �����Ƿ�, 
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ �� �� �����ϴ�.  

	// Card myCard[3]; 

	/*myCard[0].grade = 'A'; 
	myCard[0].health = 100; 
	myCard[0].attack = 5.0; 

	myCard[1].grade = 'B';
	myCard[1].health = 1000;
	myCard[1].attack = 50.0;

	myCard[2].grade = 'C';
	myCard[2].health = 10000;
	myCard[2].attack = 500.0; */  

	// ����ü�� �� ����� ����ü ���𿡼� ��Ÿ���� ������� �ʱ�ȭ�ؾ� �Ǹ�, 
	// �� ������ ���ʿ������� ���������� �̾����ϴ�. 

	/*Card myCard[3] = 
	{
		{'A', 100, 5.0},
		{'B', 1000, 50.0},
		{'C', 10000, 500.0}
	};

	for (int i = 0; i < 3; i++)
	{
		printf("myCard[%d].grade: %c\n", i, myCard[i].grade); 
		printf("myCard[%d].health: %d\n", i, myCard[i].health);
		printf("myCard[% d].attack: %.2lf\n\n", i, myCard[i].attack); 
	}*/

#pragma endregion 
#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� 
	// ���� �� �ֵ��� �����Ϸ��� ���������� ��Ͽ� 
	// ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�. 

	// printf("sizeof(Card): %ld\n", sizeof(Card)); 

	// ����ü�� ũ���� ��� ��� ������ ������ ���� �޸� ũ�Ⱑ �ٸ��� ������ �� ������, 
	// ����ü ũ�⸦ �����ϴ� ���´� �⺻ �ڷ������θ� �����˴ϴ�. 
	// �޸� ���İ� �е��� �߰��� �� �����Ƿ� ���� ũ�⺸�� �� Ŀ�� �� �ֽ��ϴ�. 

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ũ�Ⱑ 
	// ���� ū �ڷ����� ����� �ǵ��� �����˴ϴ�. 
#pragma endregion 
#pragma region ���������ǰŸ�
	/*Point pt1 = { 3, 4 }; 
	Point pt2 = { 5, 7 }; 

	double dx = pt2.x - pt1.x; 
	double dy = pt2.y - pt1.y; 
	double dis = sqrt(pow(dx, 2) + pow(dy, 2)); 

	if (dis > 5.0)
	{
		printf("Can't Attack.\n"); 
	}
	else
	{
		printf("Can Attack.\n"); 
	}*/
#pragma endregion 
#pragma region �ڱ���������ü 

	Node node1 = { 10, NULL }; 
	Node node2 = { 20, NULL }; 
	Node node3 = { 30, NULL }; 
	
	 Node* pCur = &node1; 
	 node1.next = &node2; 
	 node2.next = &node3;
	 
	while (1) 
	{
		printf("curNode.data = %d\n", pCur->data); 		

		if (pCur->next == NULL) 
			break; 

		pCur = pCur->next;
	}

#pragma endregion
	return 0; 
}