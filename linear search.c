#include<stdio.h>
int main()
{
	int x[5] = {10,20,50,40,30};
	int n = 80,i,flag = 0;
	for(i=0;i<5;i++)
	{
		if(x[i]==n)
		flag = 1;
	}
	if (flag == 1)
	{
		printf("number is found");
	}
	else
	{
		printf("number is not found");
	}
	return 0;
}
