#include<stdio.h>
         int find_square(int num){
		int result= num*num;
		return result;
	}
	int main()
	{
		int n =5;
		int answer;
		answer=find_square(n);
		printf("%d\n",answer);
		return 0;
	}

