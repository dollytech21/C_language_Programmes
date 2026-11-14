#include<stdio.h>
int main()
 {
 	int pin = 1234;
 	int entered_pin;
 	int account_balance = 10000;
 	int withdraw_amount;
 	printf("Welcome to ATM\n");
 	printf("Enter PIN = ");
 	scanf("%d", &entered_pin);
 	if (entered_pin != pin)
 	{
 		printf("Wrong Pin\n");
	 }
	 else
	 {
	 	printf("Right Pin! Your balance is: Rupee %d \n", account_balance);
	 	printf("Enter money = ");
	 	scanf("%d", &withdraw_amount);
	 if(withdraw_amount > account_balance)
	 {
	 	printf("No money! \n");
	 }
	 else if (withdraw_amount<=0)
	 {
	 	printf("Enter right amount! \n");
	 }
	 else
	 {
	 	account_balance = account_balance - withdraw_amount;
	 	printf("Success: %d\n", withdraw_amount);
	 	printf("Leaving balance: %d\n", account_balance);
	 }
	}
	 return 0;
 }
