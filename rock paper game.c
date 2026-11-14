#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main()
{
	int user_choice, comp_choice;
	char play_again;
	srand(time(0));
	do {
	printf("-----^^___^^WELCOME TO ROCK PAPER SCISSORS GAME^^____^^------\n\n");
	printf("1. Rock (Patthar)\n");
	printf("2. Paper (Kagaz)\n");
	printf("3. scissors (kaichi)\n");
	printf("\n Apna option choose kare (1, 2, or 3): ");
	scanf("%d", &user_choice);
	comp_choice = rand() % 3 + 1;
	printf("Apke dost ne chuna: %d\n", comp_choice);
	if (user_choice == comp_choice) {
		printf("Match draw! same choice!\n");
	} else if ((user_choice == 1 && comp_choice == 3) ||
	         (user_choice == 2 && comp_choice == 1) ||
	         (user_choice == 3 && comp_choice == 2)) {
	         	printf("Congratulations! you win the match\n");
	         	printf("Apne sabit kar diya ki apka dimag ghutne per nahi hai\n");
		}   
		else {
			printf("Oh! no! You lost the match!\n");
			printf("apka dimag ghutno per hai ya dimag hai hi nahi, hihihihihiii\n");
			printf("computer win!, apka dost jeet gaya\n");
		}
                  printf("Want to play once again?(y/n): \ny");
                  printf("Apne dost ko harana chahoge\n");
                  play_again = getch();
}         while (play_again == 'y' || play_again == 'Y');
printf("\n GAME OVER! GOOD BYE!\n MAZE KARO! FIR MILENGE\n ");
return 0;
}
