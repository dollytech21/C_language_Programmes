#include<stdio.h>
int main()
{
	int a[5] = {10,20,30,40,50};
	int key, low = 0,high = 4, mid;
	printf("Enter element to search = ");
	scanf("%d",key);
	while (mid<=high)
	{
		mid = (low + high)/2;
	}
	if (a[mid] == key)
	{
		printf("key is found");
	}
	else
	{
		printf("key is not found");
	}
	return 0;
}
