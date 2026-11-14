#include<stdio.h>
int jod_karo(int a, int b) {
	int total = a+b;
	return total;
}
int main()  {
	int ans1 , ans2;
	printf("Hum Functoins seekh rehe hain! \n");
	ans1 = jod_karo(10 ,20);
	ans2 = jod_karo(50 ,40);
	printf("%d\n", ans1);
	printf("%d\n", ans2);
	return 0;
}
