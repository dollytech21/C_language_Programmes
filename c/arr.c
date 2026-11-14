#include<stdio.h>
int main()
{
	int arr[5],i;
	int temp,start,end;
	for(i=0;i<5;i++)
	{
		printf("Enter element %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++) {
	printf("%d ",arr[i]);
}
         start=0;
         end=4;
         while(start<end)
         {
         	temp=arr[start];
         	arr[start]=arr[end];
         	arr[end]=temp;
         	start++;
         	end--;
		 }
		 printf("\nreversed array is = ");
		 for(i=0;i<5;i++)
		 {
		 	printf("%d ",arr[i]);
		 }
		 return 0;
}
