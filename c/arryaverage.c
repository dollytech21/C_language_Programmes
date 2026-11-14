#include<stdio.h>
int main()
{
	int marks[5] = { 10, 20, 30, 40, 50};
	int sum = 0;
	int i;
	float average;
	for (i=0; i < 5; i++){
		sum = sum+ marks[i];
	}
	average = sum /5.0;
	printf("%d\n", sum);
	printf("%.2f\n", average);
	return 0;
}
