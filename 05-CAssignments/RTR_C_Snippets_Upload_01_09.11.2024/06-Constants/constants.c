#include <stdio.h>

#define MY_PI 3.1415926535897932

#define AMC_STRING "AstroMediComp RTR"

// If first constant is not assigned a value, It is assumed to be 0 i.e: 'SUNDAY' will be 0.
// And the rest of the constants are assigned consecutive integer values from 0 onwards i.e: 'MONDAY' will be 1, 'TUESDAY' will be 2, and so on ...

// Un - named enums
enum
{
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
};

enum
{
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

// Named enums
enum Numbers
{
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE = 5,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN
};

enum boolean
{
	TRUE = 1,
	FALSE = 0
};

int main(void)
{

	// local constant declarations
	const double epsilon_ra = 0.000001;

	// code
	printf("\n\n");
	printf("Local constant epsilon = %lf\n\n", epsilon_ra);

	printf("SUNDAY is day number = %d\n", SUNDAY);
	printf("MONDAY is the day number = %d\n", MONDAY);
	printf("TUESDAY is the day number = %d\n", TUESDAY);
	printf("WEDNESDAY is the day number = %d\n", WEDNESDAY);
	printf("THURSDAY is the day number = %d\n", THURSDAY);
	printf("FRIDAY is the day number = %d\n", FRIDAY);
	printf("SATURDAY is the day number = %d\n", SATURDAY);

	printf("ONE Is Enum Number = %d\n", ONE);
	printf("TWO Is Enum Number = %d\n", TWO);
	printf("THREE Is Enum Number = %d\n", THREE);
	printf("FOUR Is Enum Number = %d\n", FOUR);
	printf("FIVE Is Enum Number = %d\n", FIVE);
	printf("SIX Is Enum Number = %d\n", SIX);
	printf("SEVEN Is Enum Number = %d\n", SEVEN);
	printf("EIGHT Is Enum Number = %d\n", EIGHT);
	printf("NINE Is Enum Number = %d\n", NINE);
	printf("TEN Is Enum Number = %d\n", TEN);

	printf("JANUARY is Month number = %d\n", JANUARY);
	printf("FEBRUARY is Month number = %d\n", FEBRUARY);
	printf("MARCH is Month number = %d\n", MARCH);
	printf("APRIL is Month number = %d\n", APRIL);
	printf("MAY is Month number = %d\n", MAY);
	printf("JUNE is Month number = %d\n", JUNE);
	printf("JULY is Month number = %d\n", JULY);
	printf("AUGUST is Month number = %d\n", AUGUST);
	printf("SEPTEMBER is Month number = %d\n", SEPTEMBER);
	printf("OCTOBER is Month number = %d\n", OCTOBER);
	printf("NOVEMBER is Month number = %d\n", NOVEMBER);
	printf("DECEMBER is Month number = %d\n", DECEMBER);

	printf("Value of True is = %d\n", TRUE);
	printf("Value of False is = %d\n", TRUE);

	printf("My_pi Macro value = %.101f\n\n", MY_PI);

	// pi * r * r = area of circle of radius 'r'
	printf("Area of Circle of Radius 2 units = %f\n\n", (MY_PI * 2.0f * 2.0f));

	printf("\n\n");

	printf(AMC_STRING);
	printf("\n\n");

	printf("AMC_STRING is : %s\n", AMC_STRING);
	printf("\n\n");

	return (0);
}