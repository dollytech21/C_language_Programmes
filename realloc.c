#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr, n1, i;
	printf("Enter no of element = ");
	scanf("%d",&n1);
	ptr = (int *) malloc(n1*sizeof(int));
	for(i=0;i<n1;i++);
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n1;i++) 
	{
		printf("%d ",*(ptr+1));
	}
	int n2;
	printf("Enter no of elements = ");
	scanf("%d",&n2);
	ptr=(int*)realloc(ptr,n2*sizeof(int));
	for(i=n1;i<(n1+n2);i++)
	{
		scanf("%d",ptr+1);
	}
	for(i=0;i<(n1+n2);i++) 
	{
		printf("%d",*(ptr+i));
	}
	return 0;
	
}
