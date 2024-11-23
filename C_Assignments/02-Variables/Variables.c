#include <stdio.h>

int main(void_ra)
{
	// variable declarations
	int i_ra = 5;
	float f_ra = 3.9f;
	double d_ra = 8.041997;
	char c_ra = 'A';

	// code
	printf("\n\n");

	printf("i_ra = %d\n", i_ra);
	printf("f_ra = %f\n", f_ra);
	printf("d_ra = %lf\n", d_ra);
	printf("c_ra = %c\n", c_ra);

	printf("\n\n");

	i_ra = 43;
	f_ra = 6.54f;
	d_ra = 26.1294;
	c_ra = 'P';

	printf("i_ra = %d\n", i_ra);
	printf("f_ra = %f\n", f_ra);
	printf("d_ra = %lf\n", d_ra);
	printf("c_ra = %c\n", c_ra);

	printf("\n\n");

	return (0);
}
