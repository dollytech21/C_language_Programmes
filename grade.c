#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks = ");
	scanf("%d", &marks);
	if (marks>=90)
	{
		printf("A Grade! brilliant! \n");
	}
	else if(marks>=75)
	{
		printf("B Grade! Very Good! \n");
	}
	else if (marks>=50)
	{
		printf("C Grade! Pass! \n");
	}
	else 
	{
		printf("Fail! Hard Work Needed! \n");
	}
	return 0;
}
