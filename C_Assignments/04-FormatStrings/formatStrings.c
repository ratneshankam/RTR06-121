#include <stdio.h>

int main(void)
{

	// Code

	printf("\n\n");

	printf("******************************************");

	printf("\n\n");

	printf("Hello World !!!\n\n");

	int a_ra = 13;
	printf("Integer Decimal Value of 'a' = %d\n", a_ra);
	printf("Integer Octal Value of 'a' = %o\n", a_ra);
	printf("Integer Hexadecimal Value of 'a' (Hexadecimal Letters In Lower Case) = %x\n", a_ra);
	printf("Integer Hexadecimal Value of 'a' (Hexadecimal Letters In Upper Case) = %X\n\n", a_ra);

	char ch_ra = 'A';
	printf("Character ch = %c\n", ch_ra);
	char str_ra[] = "AstroMediComp's Real Time Rendering Batch";
	printf("String str = %s\n\n", str_ra);

	long num_ra = 30121995L;
	printf("Long Integer = %ld\n\n", num_ra);

	unsigned int b_ra = 7;
	printf("Unsigned Integer 'b' = %u\n\n", b_ra);

	float f_num_ra = 3012.1995f;
	printf("Floating Point Number With Just %%f 'f_num' = %f\n", f_num_ra);
	printf("Floating Point Number with %%4.2f 'f_num' = %4.2f\n", f_num_ra);
	printf("Floating Point Number with %%6.5f 'f_num' = %6.5f\n\n", f_num_ra);

	double d_pi_ra = 3.14159265358979323846;
	printf("Double Precision Floating Point Number Without Exponential = %g\n", d_pi_ra);
	printf("Double Precision Floating Point Number With Exponential (Lower Case) = %e\n", d_pi_ra);
	printf("Double Precision Floating Point Number With Exponential (Upper Case) = %E\n\n", d_pi_ra);
	printf("Double Hexadecimal Value Of 'd_pi' (Hexadecimal Letters In Lower Case) = %a\n", d_pi_ra);
	printf("Double Hexadecimal Value of 'd_pi' (Hexadecimal Letters In Upper Case) = %A\n\n", d_pi_ra);

	printf("******************************************");

	printf("\n\n");

	return (0);
}
