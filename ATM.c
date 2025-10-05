#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int blnc=1000,o,funds;
	printf("1.Withdraw\n2.Deposite\n3.Check balance\n4.Exit\nenter your choice:");
	scanf("%d",&o);
	switch(o)
	{case 1:
		printf("\nenter the amount youd like to withdraw:");
		scanf("%d",&funds);
		if(funds<=1000)
		printf("\nthank you for banking with us!\n you remaining amount is %d",blnc-funds);
		else
		printf("\n insufficient funds!:(");
		break;
	case 2:
		printf("\nenter the amount youd like to depsosite:");
		scanf("%d",&funds);
		printf("\nthank you for banking with us!\nyour net balance after depositing is %d",blnc+funds);
		break;
	case 3:
		printf("\nYour current balance is %d",blnc);
		break;
	case 4:
		printf("\nExiting...");
		break;
	default:
		printf("\nInvalid choice!");
		break;
		
	}
	return 0;
}
