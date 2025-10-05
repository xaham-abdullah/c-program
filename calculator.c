#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int num1,num2;
	char op;
	printf("1.ADDITION(+)\n2.SUBSTRACTION(-)\n3.DIVISION(/)\n4.PRODUCT(x)\n5.MODULUS(%%)\nenter the operator:");
	scanf("%c",&op);
	printf("\nenter a two numbers:");
	scanf("%d %d",&num1,&num2);
	switch(op)
{
		case '+':
		printf("\n%d+%d=%d",num1,num2,num1+num2);
	break;
	case '-':
	printf("\n&d-%d=%d",num1,num2,num1-num2);
	break;
	case '/':
		if(num2==0)
		printf("\nmath err");
		else 
	printf("\n&d/%d=%d",num1,num2,num1/num2);
	
	break;
	case 'x':
	printf("\n%dx%d=%d",num1,num2,num1*num2);
	break;
	case '%':
		if(num2==0)
		printf("\nmath err");
		else 
	printf("\n%d mod %d=%d",num1,num2,num1%num2);
	break;
	default:
		printf("\n invalid operator!");
		break;
	
	}
	

	 
	return 0;
}
