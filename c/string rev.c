#include<stdio.h>
#include<string.h>
int main()
{
	char str[100], temp;
	int i, j;
	printf("Enter string = ");
	scanf("%s", str);
	for(j=0;str[j]!='\0';j++)
	j = j-1;
	for(i=0;i<j;i++,j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	printf("Reversed string is = %s",str);
}
