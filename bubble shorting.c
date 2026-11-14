#include<stdio.h>
int main()
{
	int x[5] = {10,30,40,50,20};
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if (x[j]>x[j+1])
			{
				temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
			}
		}
	}
	for (i=0;i<5;i++)
	{
		printf("%d ",x[i]);
	}
	return 0;
}
