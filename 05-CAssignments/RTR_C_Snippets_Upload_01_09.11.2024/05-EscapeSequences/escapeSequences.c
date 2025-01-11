#include <stdio.h>

int main(void) {

	// code
	printf("\n\n");
	printf("Going on to next line...using \\n Escape Sequence\n\n");
	printf("Demonstrating \t Horizontal \t Tab \t Using \t \\t Escape Sequence !!!\n\n");
	printf("\"This is a double quoted output\" done using \\\" \\\" Escape Sequence\n\n");
	printf("\'This is a single quoted output\' done using \\\' \\\' Escape Sequence\n\n");
	printf("BACKSPACE turned to BACKSPACE\b using Escape Sequence \\b\n\n");

	printf("\r Demonstrating carriage return using \\r Escape Sequence\n");
	printf("Demonstrating \r carriage return using \\r Escape Sequence\n");
	printf("Demonstrating carriage \r return using \\r Escape Sequence\n\n");

	// 0x41 is the hexadecimal code for letter 'A'. 'xhh' is the place-holder for 'x' followed by 2 digits (hh), altogether forming a hexadecimal number;
	printf("Demonstrating \x41 using \\xhh Escape Sequence\n\n");

	// 102 is the octal code for letter 'B'. 'ooo' is the place-holder for 3 digits forming an octal number
	printf("Demonstrating \102 using \\ooo Escape Sequence\n\n");

	return (0);
}
