#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
char rev[100];
printf("Enter string = ");
scanf("%s",str);
strcpy(rev,str);
strrev(rev);
if(strcmp(str,rev)==0)
printf("\n string is polindrome");
else
printf("string is not polindrome");
return 0;
}
