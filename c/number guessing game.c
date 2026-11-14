#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int secret_number, guess, attempts = 0;
	srand(time(0));
	secret_number = rand() % 100 + 1;
	printf("****-------Welcome to cute^^____^^ Number Guessing Game!!---------****\n\n");
	printf("Chalo shuru kare!!\n\n");
	printf("Maine 1 se 100 tak ek number socha hai. Usko guess karke batao!\n\n");
	do {
		printf("Apna guess number batao: ");
		scanf("%d", &guess);
		attempts++;
		if (guess > secret_number) {
			printf("Too high! thoda chota socho, hehehehehe\n\n");
		}
		else if (guess < secret_number) {
			printf("Too low! thoda bada socho, hihihihihiiiii\n\n");
		}
		else {
			printf("Wow! akhir kar dikhaya......\n, yeyeyeyeye, hurrah!!\n\n");
			printf("Congratulations!! you guess it right in %d attempts!\n",attempts);
		}
	}    while (guess != secret_number);
	return 0;	
}
