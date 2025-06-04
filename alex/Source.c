#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

// 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가 
// 가장 큰 자료형의 배수가 되도록 설정됩니다.  

// | char(1) | padding(3) | int(4) | double(8) | <== 16 byte 메모리가 잡힌다.  
/* typedef struct tagCard
{
	char grade;
	int health;
	double attack;
} Card; */

// | char(1) | padding(7) | double(8) | int(4) | padding(4) | <== 24 byte 메모리가 잡힌다. 
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

#pragma region 구조체 
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음 
	// 하나의 객체를 생성하는 것입니다. 
	// 구조체를 선언하기 전에 구조체는 메모리 공간이 생성되지 않으므로, 
	// 구조체 내부에 있는 데이터를 초기화 할 수 없습니다.  

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

	// 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화해야 되며, 
	// 이 순서는 왼쪽에서부터 오른쪽으로 이어집니다. 

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
#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 
	// 읽을 수 있도록 컴파일러가 레지스터의 블록에 
	// 맞추어 바이트를 패딩해주는 최적화 작업입니다. 

	// printf("sizeof(Card): %ld\n", sizeof(Card)); 

	// 구조체의 크기의 경우 멤버 변수의 순서에 따라 메모리 크기가 다르게 설정될 수 있으며, 
	// 구조체 크기를 결정하는 형태는 기본 자료형으로만 구성됩니다. 
	// 메모리 정렬과 패딩이 추가될 수 있으므로 예상 크기보다 더 커질 수 있습니다. 

	// 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가 
	// 가장 큰 자료형의 배수가 되도록 설정됩니다. 
#pragma endregion 
#pragma region 두점사이의거리
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
#pragma region 자기참조구조체 

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