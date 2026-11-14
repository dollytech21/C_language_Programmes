 #include<stdio.h>
 int main()
 {
 	char full_name[50];
 	printf("Please enter your name = ");
 	scanf("%[^\n]%*c",full_name);
 	printf("\n ---Welcome in coding dear Dolly---\n");
 	printf("%s\n",full_name);
 	return 0;
 }
 
