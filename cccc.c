#include<stdio.h>
int main() 
{
	int x,f;
	printf("enter  number = ");
	scanf("%d",&x);
	f = fact(x);
	printf("Answer = %d",f);
	return(0);	
}
	int fact(int a)
	{
		if (a>0)
		return(a%10, a/10);
		else 
		return(0);
	}
	

