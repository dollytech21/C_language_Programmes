#include<stdio.h>
void countdown(int n) {
	if (n==0) {
		printf("Dhamaka!\n");
		return;
	}
	printf("%d\n", n);
	countdown(n - 1 );
}
	int main() {
		printf("Countdown\n");
		countdown(5);
		return 0;
	}
