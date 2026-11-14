#include<stdio.h>
int main()
{
	int marks[5] = { 10, 20, 30, 40, 50 };
	int i;
	printf("Ulta array hai: \n");
	for (i=4; i>=0; i--)
	{
		printf("%d\n", marks[i]);
	}
	return 0;
}
