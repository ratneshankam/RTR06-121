#include <stdio.h>

int main(void)
{

	// variable declarations
	int a_ra; int b_ra;
	int result_ra;

	// code
	printf("\n\n");
	printf("Enter a number : ");
	scanf("%d", &a_ra);

	printf("\n\n");
	printf("Enter another number : ");
	scanf("%d", &b_ra);

	printf("\n\n");

	// The following are the 5 arithmetic operators +, -, *, / and %
	// Als0, the resultants of the arithmetic operations in all the below five cases have been 	  // assigned to the variable 'result_ra' using the assignment operator (=)

	result_ra = a_ra + b_ra;
	printf("Addtion of A = %d and B = %d gives %d.\n", a_ra, b_ra, result_ra);

	result_ra = a_ra - b_ra;
	printf("Substraction of A = %d and B = %d gives %d.\n", a_ra, b_ra, result_ra);

	result_ra = a_ra * b_ra;
	printf("Multiplication of A = %d and B = %d gives %d.\n", a_ra, b_ra, result_ra);

	result_ra = a_ra / b_ra;
	printf("Division of A = %d and B = %d gives quotient %d.\n", a_ra, b_ra, result_ra);

	result_ra = a_ra % b_ra;
	printf("Division of A = %d and B = %d gives remainder %d.\n", a_ra, b_ra, result_ra);

	printf("\n\n");

	return (0);
}
