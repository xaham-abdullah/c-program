#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int op;
	printf("1.Computer science\n2.Electrical engineering\nmake decision:");
	scanf("%d",&op);
	switch (op)
{
		case 1:
		printf("\nyou have chosen computer science!\n1.year one\n2.year two\nmake your decision:");
		scanf("%d",&op);
		switch(op)
		{
		case 1:
			printf("\nyou have chosen year one!");
			printf("\nhere are the following courses:\n1.Calculus & Analytical Geometry\n2. Applied Physics\n3. Introduction to Computing / Programming Fundamentals\n4. Discrete Mathematics\n5. English / Communication Skills\n6. Islamic Studies / Ethics");
		break;
		case 2:
			printf("\nyou have chosen year two!");
				printf("\nhere are the following courses:\n1.Digital Logic\n2.Design Data\n3.Structures & Algorithms\n4.Database Management Systems\n5.Financial & Cost Accounting\n5.Business ");
				
		break;
		
		default:
			printf("\ninvalid entry!");
		}
		break;
	case 2:
		printf("\nyou have chosen electrical engineering!\n1.year one\n2.year two\nmake your decision:");
		scanf("%d",&op);
	   switch (op)
		{
		case 1:
			printf("\nyou have chosen year one!");
			printf("\nhere are the following courses:\n1.Calculus & Analytical Geometry\n2. Applied Physics\n3. Introduction to Computing / Programming\n4. Basic Electrical Engineering (Circuits)\n5. Workshop Practice / Engineering Drawing\n6. Communication Skills / English");
		break;
		case 2:
			printf("\nyou have chosen year two!");
			printf("\nhere are the following courses:\n1.Differential Equations & Linear Algebra\n2. Circuit Analysis\n3. Digital Logic Design\n4. Electronic Devices & Circuits\n5. Signals & Systems\n6. Probability & Statistics");
			
		
		break;
		default:
			printf("\ninvalid entry!");
		}
		break;
		default:
			printf("\ninvalid entry!");
}
	return 0;
}
