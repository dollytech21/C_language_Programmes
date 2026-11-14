#include<stdio.h>
void fun1(int num)
{
	if (num==0)
	return;
	else 
	printf("\n number is:%d",num);
	return fun1(num-1);
}
int main()
{
	fun1(7);
	return 0;
}
