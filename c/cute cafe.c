#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int choice1, choice2;
	char play_again;
	do {
		system("cls");
	printf("-----^^_____^^ WELCOME TO CUTE MONSTER CAFE ^^____^^--------\n");
	printf("Great! Great! You are the boss of your cafe!\n\n");
	printf("Ek bhookha Monster andar aaya aur chillaya: 'Mujhe kuch ajeeb khilao!\n'");
	printf("1. Spooky Momos\n");
	printf("2. Chilgoza Shake\n");
	printf("3. Chocolate Pasta\n");
	printf("4. Patakha Samosa\n");
	printf("5. Spooky Pizza\n");
	printf("\n Tum monster ko kya khilana chahoge(1 to 5): ");
	scanf("%d", &choice1);
	switch(choice1) {
		case 1:
			printf("\n Monster ne Momos khaye....Ohhh! Usee bhayanak mirchi lag gayi!\n");
			printf("Monster gusse me cafe tod raha hai! Ab kya karoge?\n");
			printf("1.Usee thoda pani de\n");
			printf("2. Usee 5-Star chocolate de\n");
			printf("\nTum kya dogi jisse uska gussa shant ho jaye?! (1 ya 2): ");
			scanf("%d",&choice2);
			if (choice2 == 2) {
				printf("\n WOW! chocolate khakar monster khush ho gaya aur dance karne laga!\n");
				printf("Cafe bach gaya ! You Win!\n");
			} else {
				printf("\n BOOM! Moster ne cafe ki table tod di aur bhag gaya!\n");
				printf("\n Apne monster ko naraz kar diya pagal hai app!,\n hihihihi!\n You Lost!\n GAME OVER!!");				
			} break;
			case 2:
				printf("\n Monster ko chilgoza shake bahut passand aaya!!!\n");
				printf("Usne khush hokar aapko 100 sone ke sikke diye!!\n");
				printf("Cafe hit ho gaya! Balle Balle!\n hurrah hurrah!!\n");
				break;
				case 3:
					printf("\n Yuck! chocolate pasta khakar monster ka et kharab ho gaya!\n");
					printf("Wo rote hue seedhe washroom ki taraf bhaga!\n");
					printf("Cafe me sab husne lage! you Win! \n");
					break;
					case 4:
						printf("\n Monster ne patakha samosa khaya!... uske muh se Dhoom-Dhadaka bomb phoota!\n");
						printf("Monster bola: 'Waah! diwali ka asli maza a gaya!'\n");
						printf("Usne apko inaam diya!!\n");
						break;
						case 5:
							printf("\n Monster ne Spooky Pizza ka ek bada bite liya!....\n");
							printf("Wah! cheese dekh kar uski akho me chamak a gayi!\n");
							printf("Monster bola: 'Waah! itna tasty pizza mai roz isi cafe me aaunga!!'\n");
							printf("cafe ki kamai 5 guna badh gayi! Super hit! YOU WIN!!!\n");
							break;
							default:
								printf("\n Hey ! Galat option mat chuno, verna Monster tumko kha jayega!\n");							
	} 
	printf("\n Want to take another order? (y/n): ");
	play_again = getch();
} while (play_again == 'y' || play_again == 'Y');
printf("\n\n Great! Greate!! You are the boss of your cafe!");
	printf("\n chalo apne sabit kar diya ki ap cafe chala sakte hai vo bhi ache se!!...\n");
	getch();
	return 0;
}
