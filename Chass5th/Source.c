#include <stdio.h> 

#define SIZE 30 // ��ũ�� ����, SIZE�� 30���� ���ǵ�

void main()
{
#pragma region �ڷ��� ��ȯ 

	//char charactor = 'A'; // char �ڷ��� 
	//int int_num1 = 10;
	//int int_num2 = 3; // int �ڷ��� 
	//float float_num = 7.4f;


	//printf("char �ڷ����� ũ��: %zu\n", sizeof(char));
	//printf("int �ڷ����� ũ��: %zu\n", sizeof(int));
	//printf("float �ڷ����� ũ��: %zu\n", sizeof(float));
	//printf("double �ڷ����� ũ��: %zu\n", sizeof(double));
	//printf("long �ڷ����� ũ��: %zu\n", sizeof(long));

	//// ������ �°� 
	//printf("charactor + int = %zu\n", sizeof(charactor + int_num1)); // char�� int�� �°ݵ�  

	///*char, short �� ���� ũ���� �������� ���꿡 ���Ǹ�
	//�ڵ����� int(�Ǵ� unsigned int)�� ��ȯ�Ǿ� ������ �̷�����ϴ�.
	//�̸� ������ �°�(integer promotion)�̶�� �θ��ϴ�.
	//*/

	//printf("sizeof(i_num + f_num) = %zu\n", sizeof(int_num1 + float_num)); 
	//printf("sizeof(i_num) = %zu\n", sizeof(int_num1)); 
	//printf("sizeof(f_num) = %zu\n", sizeof(float_num));	
	//printf("sizeof(i_num + 10) = %zu\n", sizeof(int_num1 + 10));
	//printf("sizeof(f_num + 10.0) = %zu\n", sizeof(float_num + 10.0)); 

	//float_num = (float)(int_num1 / int_num2);   // int_num1�� int_num2�� int �ڷ����̹Ƿ� ���� �������� ����� 
	//printf("int_num1 / int_num2 = %f\n", float_num); // int�� float�� �°��Ͽ� ���� 

	//float position = (float)((float)int_num1 / (float)int_num2); 
	//printf("position = %f\n", position); // x�� y�� int �ڷ����̹Ƿ� ���� �������� ����� 

#pragma endregion 
#pragma region ��ó����
#pragma endregion
#pragma region ��ũ��
	//printf("SIZE�� ��: %d\n", SIZE); // ��ũ�� SIZE�� �� ��� 
	//printf("channel�� ��: %d\n", channel);
#pragma endregion

}
