#include<stdio.h>
int main()
{
	int num1, i, fact = 1;
	printf("Enter no");
	scanf("%d", &num1);
		i= 1;
	do
	{
		fact = fact*i;
		i = i+1;
	}
	while (i<=num1);
	printf("%d",fact);
	return 0;
}
