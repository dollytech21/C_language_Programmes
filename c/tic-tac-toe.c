  #include<stdio.h>
  #include<conio.h>
  void print_board(char board[3][3]) {
  	printf("\n-------^^_____^^ TIC-TAC-TOE GAME(KATTAM PARI) ^^____^^------\n\n");
  	printf("    %c | %c | %c   \n", board[0][0],board[0][1],board[0][2]);
  	printf("  -----|-----|-----\n");
  	printf("    %c | %c | %c \n", board[1][0],board[1][1],board[1][2]);
  	printf("  -----|-----|-----\n");
  	printf("   %c | %c | %c \n\n", board[2][0],board[2][1],board[2][2]);
  }
  int check_win(char b[3][3]) {
  	if (b[0][0] == b[0][1] && b[0][1] == b[0][2]) return 1;
  	if (b[1][0] == b[1][1] && b[1][1] == b[1][2]) return 1;
  	if (b[2][0] == b[2][1] && b[2][1] == b[2][2]) return 1;
  	
  	if (b[0][0] == b[1][0] && b[1][0] == b[2][0]) return 1;
  	if (b[0][1] == b[1][1] && b[1][1] == b[2][1]) return 1;
  	if (b[0][2] == b[1][2] && b[1][2] == b[2][2]) return 1;
  	
  	if (b[0][0] == b[1][1] && b[1][1] == b[2][2]) return 1;
  	if (b[0][2] == b[1][1] && b[1][1] == b[2][0]) return 1;
  	return 0;
  }
  int main() {
  	char play_again;
  	do{
  	char board[3][3] = {
  		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
		  };
		  int choice;
		  char player = 'x';
		  int total_turns = 0;
		  while (total_turns < 9) {
		  	system("cls");
		  print_board(board);
		  printf("Player %c, apna number chuno (1-9): ",player);
		  scanf("%d",&choice);
		  if (choice == 1) board[0][0] = player;
		  else if (choice == 2) board[0][1] = player;
		  else if (choice == 3) board[0][2] = player;
		  else if (choice == 4) board[1][0] = player;
		  else if (choice == 5) board[1][1] = player;
		  else if (choice == 6) board[1][2] = player;
		  else if (choice == 7) board[2][0] = player;
		  else if (choice == 8) board[2][1] = player;
		  else if (choice == 9) board[2][2] = player;
		  else {
		  	printf("\nInvalid choice! ya to number galt haiya to vo pahle se bhara hai. Press Enter...");
		  	getch();
		  	continue;
		  }
		  total_turns++;
		  if (check_win(board) == 1) {
		  	system("cls");
		  	print_board(board);
		  	printf("\n CONGRATULATIONS!! Player %c ne game jeet liya hai!\n", player);
		  	getch();
		  	break;
		  	
		  }
		  if (player == 'x') {
		  	player = '0';
		  } else {
		  	player = 'x';
		  }
	}
	            system("cls");
		  print_board(board);
		  printf("\n^^___^^ GAME OVER ^^___^^");
		  printf("\nMaze karo!\n Enjoy your lovely life!\n");
		  printf("Wnat to play again?(y/n): \n");
		  printf("Apne dost ko harana chahoge\n");
		  play_again = getch();
	} while (play_again == 'y' || play_again == 'Y');
	printf("\n GAME OVER ! BYE - BYE!\n APKA DIN SHUBH HO!\n");
	getch();
		  return 0;
  }
