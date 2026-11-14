/*WAP to calculate simple interest*/
#include<stdio.h>
int main()
{
	float principle_value;
	printf("Enter principle value = ");
	scanf("%f", & principle_value);
	float rate;
	printf("Enter rate = ");
	scanf("%f", &rate);
	float time;
	printf("Enter time = ");
	scanf("%f", &time);
	float result = principle_value*rate*time/100.0;
	printf("%.2 f\n", result);
	return 0;
}
