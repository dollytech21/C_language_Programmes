#include<stdio.h>
int main()
{
	int marks = 95;
	int *p;
	p = &marks;
	printf("Pointers ka Jaadu\n");
	printf("%d\n", marks);
	printf("%p\n", p);
	printf("%d\n", *p);
	return 0;
}
