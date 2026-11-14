#include<stdio.h>
void head_fun(int num)
{
	if (num>0)
	{
		head_fun(num-1);
		printf("%d", num);
	}
}
int main()
{
	int a=5;
	printf("Non-tail\n");
	head_fun(a);
	return 0;
}
