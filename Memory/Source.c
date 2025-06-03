#include <stdio.h> 
#include <stdlib.h> 

// Class2th ÂüÁ¶

int main()
{
	int* pt = (int*)malloc(sizeof(int));
	*pt = 10;
	free(pt);

	int cnt = 5;
	pt = (int*)malloc(sizeof(int) * cnt);

	for (int i = 0; i < cnt; i++)
	{
		pt[i] = (i + 1) * 10;
		printf("pt[%d]: %d\t", i, pt[i]);
	}

	free(pt);

	return 0;
}