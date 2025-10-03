#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	float sum=1.0;
	int i=4.0;
	while(i<=400)
	{sum+=1.0/i;
	i+=4;
	
	}
	
	printf("%f",sum);
	return 0;
}
