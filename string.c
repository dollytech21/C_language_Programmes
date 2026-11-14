#include<stdio.h>
#include<string.h>
int main()
{
	char source_word[] = "Welcome Dolly";
	char copy_box[20];
	int length;
	printf("String Library ka Jaddu\n\n");
	length = strlen(source_word);
	printf("%s:%d\n", source_word, length);
	strcpy(copy_box, source_word);
	printf("%s\n", copy_box);
	return 0;
}
