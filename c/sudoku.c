#include<stdio.h>
int main()
{
	int i,j;
	int sudoku[9][9] = {
	{5,3,0,0,7,0,0,0,0},
	{6,0,0,1,9,5,0,0,0},
	{0,9,8,0,0,0,0,6,0},
	{8,0,0,0,6,0,0,0,3},
	{4,0,0,8,0,3,0,0,1},
	{7,0,0,0,2,0,0,0,6},
	{0,6,0,0,0,0,2,8,0},
	{0,0,0,4,1,9,0,0,5},
	{0,0,0,0,8,0,0,7,9}
};
      for(i=0;i<9;i++) {
      	for(j=0;j<9;j++) {
      		if(sudoku[i][j]==0) {
      			printf(". ");
			  } else {
			  	printf("%d ",sudoku[i][j]);
			  }
		  }
		   printf("\n");
	  } 
	  int row, col, num;
	  while (1) {
	  	printf("\nFor filling the number please press enter key:\n");
	  	printf("Row number (1-9): ");
	  	scanf("%d", &row);
	  	printf("Column number (1-9): ");
	  	scanf(" %d", &col);
	  	printf("Number (1-9) [Exit ke liye 0]: ");
	  	scanf(" %d", &num);
	  	if (num == 0) {
	  		printf("Game band ho raha hai. Alvida!\n Good bye!\n Fir milenge!\n");
	  		break;
		  }
		  int targetRow = col - 1;
		  int targetCol = row - 1;
		  if (targetRow >=0 && targetRow < 9 && targetCol >= 0 && targetCol < 9 && num >= 1 && num <= 9) {
		  	sudoku[targetRow][targetCol] = num;
		  	system("cls");
		  	printf("\n\n UPDATED SUDOKU\n");
		  	for(i=0; i<9; i++) {
		  		for(j=0; j<9; j++) {
		  			if(sudoku[i][j] == 0) {
		  				printf(". ");
					  } else {
					  	printf("%d ", sudoku[i][j]);
					  }
				  }
				  printf("\n");
			  }
		  }
		  else {
		  	printf("Wrong input! give numbers between only 1 to 9.\n");
		  	printf("sudoku dimag ka  khel hai agar vo tumhare pass nahi hai to mat khelo!\n");
		  	printf("samjhe! tum to mujhse bhi bekar ho isme!\n");
		  	printf("tumko itna nahi pata ki sudoku me 9 tak ke digit ate hai!\n");
		  	printf("Bekar hai bhaiya tumhara dimag ekdum ghatiya!\n ");
		  }	  
}
}
