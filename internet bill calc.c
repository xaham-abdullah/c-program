#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double data;
	printf("enter the amount of data surfed:");
	scanf("%ld",&data);
	if(data>=0||data<=100)
	printf("\nyour bill after tax is %ld",data*2+data*0.1);
	else if(data>=100||data<=200)
	printf("\nyour bill after tax is %ld",data*1.5+data*0.1);
	else if(data>=200||data<=400)
	printf("\nyour bill after tax is %ld",data*1+data*0.1);
	else 
	printf("\nyour bill after tax is %ld",data*0.5+data*0.1);
	
	return 0;
}
