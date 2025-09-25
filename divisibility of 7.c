#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include <stdio.h>

int main() {
    long num, lastDigit, rest, result;

    printf("Enter a number: ");
    scanf("%ld", &num);

    result = num;

    printf("\nChecking divisibility by 7:\n");

    while (result != 0 && result != 7 && result != -7 && result > 9 || result < -9) {
        lastDigit = result % 10;       
        
        rest = result / 10;           
        result = rest - 2 * lastDigit; 

        printf("%ld\n", result);      
    }

    if (result == 0 || result == 7 || result == -7) {
        printf("\n%ld is divisible by 7.\n", num);
    } else {
        printf("\n%ld is NOT divisible by 7.\n", num);
    }

    return 0;
}

	return 0;
}
