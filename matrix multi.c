#include<stdio.h>
int main()
{
int a[3][3], b[3][3], result[3][3];
int i,j,k;
printf("elements for first matrix = ");
int a[2][3] = {
	{1,2,3},
	{4,5,6}
	};
	int b[3][2] = {
	{9,1},
	{7,8},
	{2,3}
	};
	int result[2][2] = {0};
	for (i=0;i<r1;i++) {
	for (j=0;j<c2;j++) {
		for (k=0;k<c1;k++){
			result[i][j] += a[i][k]*b[k][j];
		}
	}
	}
	printf("Result matrix after multiplication\n");
	for(i=0;i<r;i++){
		for(j=0;j<c2;j++) {
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	return 0;
	}
	
	
	
	
	
	
	
	
	




