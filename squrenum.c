#include<stdio.h>
int main()
{
	int num1;
	int num2;
	printf("Enter number = ");
	scanf("%d", &num1);
	printf("Enter number = ");
	scanf("%d", &num2);
	int result = num1%num2;
	printf("modulas = %d\n", result);
	return 0;
}
