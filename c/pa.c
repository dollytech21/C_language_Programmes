#include<stdio.h>
#include<stdio.h>
int main()
{
	char str[30];
	char rev[30];
	printf("Enter name = ");
	scanf("%s",str);
	strcpy(rev,str);
	strrev(rev);
	if (strcmp(str,rev)==0)
	printf("\n string is palindrome");
	else
	printf("string is not palindrom");
	return 0;
}
