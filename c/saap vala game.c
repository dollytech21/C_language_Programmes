#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int width = 30, height = 30;
int x, y, fruitX, fruitY, score;
int dir;
int gameOver;
int i, j;
void setup() {
	gameOver = 0;
	dir = 0;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	if(fruitX == 0) fruitX = 1;
	fruitY = rand() % height;
	if(fruitY == 0) fruitY =1;
	score = 0;
}
void draw() {
	COORD coord = {0, 0};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	printf("==================================================================\n");
	printf("   SNAKE GAME (Final Version)     \n");
	printf("============================================================\n");
	printf(" Controls: W=Up, S=Down, A=Left, D=Right \n");
	printf("     (Game band kerne ke liye X)    \n");
	printf("====================================================================\n\n");
	for (i = 0; i < width + 2; i++) {
	printf("#");
}
	printf("\n");
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			if (j == 0) {
			printf("#");
		}
			if (i ==y && j == x) {
			printf("0");
			} else if (i == fruitY && j == fruitX) {
			printf("F");
			 } else {
			printf(" ");
		}
			if (j == width - 1) {
			printf("#");
		}
	}
		printf("\n");
	}
	
	for (i = 0; i < width + 2; i++) {
	printf("#");
}
printf("\n");
	printf("\nScore: %d\n", score);
}
void input() {
	if (kbhit()) {
		switch (getch()) {
			case 'a': case'A': dir = 1; break;
			case 'd': case'D': dir = 2; break;
			case 'w': case'W': dir = 3; break;
			case 's': case'S': dir = 4; break;
			case 'x': case'X': gameOver = 1; break;
		}
	}
}
void logic() {
	switch (dir) {
		case 1: x--; break;
		case 2: x++; break;
		case 3: y--; break;
		case 4: y++; break;
		default: break;	
	}
	if (x < 0 || x >=width || y < 0 || y >=height) {
		gameOver = 1;
	}
	if (x == fruitX && y == fruitY) {
		score += 10;
		fruitX = rand() % width;
		fruitY = rand() % height;
	}
}
int main(){
setup();
while (!gameOver) {
	draw();
	input();
	logic();
	Sleep(400);
}
  system("cls");
  printf("\n\n=================================================\n");
  printf("  GAME OVER! Aapka dimag toh sahi chal raha tha.....\n");
  printf("Fir achanak kharabi kaha se a gayi....\n");
  printf("  FINAL SCORE: %d\n", score);
  printf("==============================================\n");
  return 0;
}

	
	
	
	
	
	
	
	
	
	
	

