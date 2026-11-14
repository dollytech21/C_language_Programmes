#include<stdio.h>
int main()
{
	int i, n, sum = 0;
	char gender;
	printf("total number of student = ");
	scanf("%d", &n);
	int marks[n];
	printf("Enter Marks > ");
	for(i = 0; i<n; i++) {
		printf("Student %d marks = ", i+1);
		scanf("%d", &marks[i]);
	}
		printf("Which student you want('b' for boys, 'g' for girls) = ");
		scanf("\n%c",&gender);
		int start_index = (gender=='g') ? 1:0;
		for (i= start_index; i<n; i= i+2) {
			sum = sum+marks[i];
		}
		  printf("Total sum = %d\n", sum);
		  return 0;
}
