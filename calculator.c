#include<stdio.h>
#include<math.h>
int main() 
{
	char op;
	double num1, num2, result;
	printf("====================================================\n");
	printf("    ALL-IN-ONE Calculator (Int & Float) \n");
	printf("========================================================\n\n");
	printf("Please select an operator (+, -, *, /, %%): ");
	scanf(" %c",&op);
	printf("Please enter two numbers (space dekar): ");
	scanf("%lf %lf", &num1, &num2);
	switch (op) {
		case '+':
			result = num1+num2;
			printf("Result: %g + %g = %g\n", num1, num2, result);
			break;
			case '-':
				result = num1 - num2;
				printf("Result: %g - %g = %g\n", num1, num2, result);
				break;
				case '*':
					result = num1*num2;
					printf("Result: %g * %g = %g\n", num1, num2, result);
					break;
					case '/':
						if (num2 !=0) {
						result = num1/num2;
						printf("Result: %g / %g = %g\n", num1, num2, result);
					} else {
						printf("Error: 0 se bhag nahi kiya ja sakta!\n");
						printf("Dimag nahi hai apke pass ya vo ghutne me hai mr./miss\n");
					}
					break;
					case '%':
						if(num2 != 0) {
							result = fmod(num1, num2);
							printf("Result: %g %% %g = %g(Remainder)\n", num1, num2, result);
                       } else {
                       	printf("Error: 0 se modulus nahi nikal sakte hai!\n");
                       	printf("tumko itna bhi nahi ata hai tum to mujhse bhi bekar ho!\n");
					   }
					   break;
					   default:
					   	printf("Error: please enter valid operator.\n");
					   }
					   return 0;
				}
				
				
				
				
				
	

