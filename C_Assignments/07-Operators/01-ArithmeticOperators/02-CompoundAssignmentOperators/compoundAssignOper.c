#include <stdio.h>

int main(void)
{

	// variable declarations
	int a_ra, b_ra, x_ra;

	// code
	printf("\n\n");
	printf("Enter a number : ");
	scanf("%d", &a_ra);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d", &b_ra);

	printf("\n\n");

	x_ra = a_ra;
	a_ra += b_ra;
	printf("Addition of a = %d and b = %d gives %d.\n", x_ra, b_ra, a_ra);

	x_ra = a_ra;
	a_ra -= b_ra;
	printf("Substraction of a = %d and b = %d gives %d.\n", x_ra, b_ra, a_ra);

	x_ra = a_ra;
	a_ra *= b_ra;
	printf("Multiplication of a = %d and b = %d gives %d.\n", x_ra, b_ra, a_ra);

	x_ra = a_ra;
	a_ra /= b_ra;
	printf("Division of a = %d and b = %d gives quotient %d.\n", x_ra, b_ra, a_ra);

	x_ra = a_ra;
	a_ra %= b_ra;
	printf("Division of a = %d and b = %d gives remainder %d.\n", x_ra, b_ra, a_ra);

	printf("\n\n");

	return (0);
}
