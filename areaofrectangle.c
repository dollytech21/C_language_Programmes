/*WAP to convert temperature from celcius to fohrenhite
[F = (9/5*C) +32]*/
#include<stdio.h>
int main()
{
	float C,F;
	printf("Enter Celcius value =");
	scanf("%f", &C);
	F = (9/5.0*C) +32;
	printf("Fohrenhite = %f", F);
	return 0;
}
