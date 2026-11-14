#include<stdio.h>
#include<string.h>
int main() {
	char first_box[200] = " Welcome ";
	char second_box[] = " Dolly! ";
	char third_box[] = " in ";
	char fourth_box[] = " coding ";
	char fifth_box[] = " world ";
	strcat(first_box, second_box);
	strcat(first_box, third_box);
	strcat(first_box, fourth_box);
	strcat(first_box, fifth_box);
	printf("%s\n", first_box);
	return 0;	
}

