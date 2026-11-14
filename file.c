#include<stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("student.text","w");
	if(fp==NULL)
	{
		printf("Unable to create file");
		return 1;
	}
	printf("File created successfully");
	fclose(fp);
	return 0;
}
