#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main()
{
	int bomb_number, user_choice;
	char play_again;
	srand(time(0));
	do {
	bomb_number = rand() % 100 + 1;
	printf("-------^^_____^^WELCOME TO NUMBER BOMB GAME ^^____^^---------\n");
	printf("Maine 1 se 100 tak ke beech ke ek number me kahi per bomb chupaya hai\n");
	printf("\n Apna safe number chuno(1 se 100) = ");
	scanf("%d", &user_choice);
	if (user_choice < 1 || user_choice > 100) {
		printf("Hey! Sirf 1 se 100 ke beech hi chuno!\n");
	}   else if (user_choice == bomb_number) {
		printf("\n BOOM! BOOM! Apne BOMB vala number chun liya!\n");
		printf("Oh no! Aap har gaye!\n computer jeet gaya!\n hihihihihihi\n");
	}  else {
		printf("\n Uff! Aap bach gaye! %d safe number hai.\n", user_choice);
		printf("You Win! Computer ka bomb number %d tha!\n", bomb_number);
	}
        printf("\n kya aap fir se khelna chahte hai? (y/n): ");
        play_again = getch();
        printf("\n");
}   while (play_again == 'y' || play_again == 'Y');
       printf("\n Game over! Bye-Bye\n enjoy your life!\n fir milenge!\n");
       getch();
       return 0;
}
