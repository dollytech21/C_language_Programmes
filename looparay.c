#include<stdio.h>
int main()
{
	int marks[5] , i;
	marks[0] = 45;
	marks[1] = 75;
	marks[2] = 92;
	marks[3] = 78;
	marks[4] = 98;
	for (i = 0; i <5; i++)
	{
		printf("%d\n %d\n", i, marks[i]);
	}
	return 0;
}
