#include<stdio.h>
int main()
{
	char statement[] = "Dolly coder 5star";
	int i = 0;
	while(statement[i] != '\0') {
		if (statement[i] ==' ') {
			printf("\n");
		}
		else {
			printf("%c", statement[i]);
		}
		i++;
	}
	printf("\n");
	return 0;
}
