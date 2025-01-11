#include <stdio.h>

int main(void)
{

	// Variable declarations
	int a_ra = 5;
	int b_ra = 10;

	// code
	printf("\n\n");
	printf("A = %d\n", a_ra);
	printf("A = %d\n", a_ra++);
	printf("A = %d\n", a_ra);
	printf("A = %d\n\n", ++a_ra);

	printf("B = %d\n", b_ra);
	printf("B = %d\n", b_ra--);
	printf("B = %d\n", b_ra);
	printf("B = %d\n", --b_ra);

	return (0);
}
