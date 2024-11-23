#include <stdio.h>

int main(void)
{

	// variable declarations
	int a_ra; int b_ra;
	int result_ra;

	// code
	printf("\n\n");
	printf("Enter one integer : ");
	scanf("%d", &a_ra);

	printf("\n\n");
	printf("Enter another integer : ");
	scanf("%d", &b_ra);

	printf("\n\n");
	printf("If answer = 0, it is 'false'.\n");
	printf("If answer = 1, it is 'true'.\n\n");

	result_ra = (a_ra < b_ra);
	printf("(a < b) a = %d is less than b = %d	\t answer = %d\n", a_ra, b_ra, result_ra);

	result_ra = (a_ra > b_ra);
	printf("(a > b) a = %d is greater than b = %d	\t answer = %d\n", a_ra, b_ra, result_ra);

	result_ra = (a_ra <= b_ra);
	printf("(a <= b) a = %d is less than or equal to b = %d	\t answer = %d\n", a_ra, b_ra, result_ra);

	result_ra = (a_ra >= b_ra);
	printf("(a >= b) a = %d is greater than or equal to b = %d	\t answer = %d\n", a_ra, b_ra, result_ra);
	result_ra = (a_ra == b_ra);

	printf("(a == b) a = %d is equal to b = %d	\t answer = %d\n", a_ra, b_ra, result_ra);

	result_ra = (a_ra != b_ra);
	printf("(a != b) a = %d is not than b = %d	\t answer = %d\n", a_ra, b_ra, result_ra);
}
