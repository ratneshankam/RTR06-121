#include <stdio.h>

int main(void)
{

	// Variable declarations
	int a_ra = 5;
	int b_ra = 10;

	// code
	printf("\n\n");
	printf("a = %d\n", a_ra);
	printf("a = %d\n", a_ra++);
	printf("a = %d\n", a_ra);
	printf("a = %d\n\n", ++a_ra);

	printf("b = %d\n", b_ra);
	printf("b = %d\n", b_ra--);
	printf("b = %d\n", b_ra);
	printf("b = %d\n", --b_ra);

	return (0);
}
