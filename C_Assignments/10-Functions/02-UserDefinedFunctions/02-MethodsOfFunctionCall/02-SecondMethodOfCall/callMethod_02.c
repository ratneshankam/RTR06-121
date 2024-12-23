#include <stdio.h> // 'stdio.h' contains declaration of printf()

// ***** USER DEFINED FUNCTIONS : METHOD OF CALLING FUNCTION 2 *****
// ***** CALLING ONLY TWO FUNCTIONS DIRECTLY IN main(), REST OF THE FUNCTION TRACE THEIR CALL INDIRECTLY TO main() *****

int main(int argc, char *argv[], char *envp[])
{
    // function prototypes OR declarations
    void myAddition(void);
    int mySubtraction(void);
    void myMultiplication(int, int);
    int myDivision(int, int);

    // variable declarations
    int result_subtraction_ra;
    int a_multiplication_ra, b_multiplication_ra;
    int a_division_ra, b_division_ra, result_division_ra;

    // code

    // *** ADDITION ***
    myAddition(); // function call

    // *** SUBTRACTION ***
    result_subtraction_ra = mySubtraction(); // function call
    printf("\n\n");
    printf("Subtraction Yields Result = %d\n", result_subtraction_ra);

    // *** MULTIPLICATION ***
    printf("\n\n");
    printf("Enter Integer Value For 'A' For Multiplication : ");
    scanf("%d", &a_multiplication_ra);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Multiplication : ");
    scanf("%d", &b_multiplication_ra);

    myMultiplication(a_multiplication_ra, b_multiplication_ra); // function call

    // *** DIVISION ***
    printf("\n\n");
    printf("Enter Integer Value For 'A' For Division : ");
    scanf("%d", &a_division_ra);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Division : ");
    scanf("%d", &b_division_ra);

    result_division_ra = myDivision(a_division_ra, b_division_ra); // function call
    printf("\n\n");

    printf("Division of %d and %d gives = %d (Quotient)\n", a_division_ra, b_division_ra, result_division_ra);

    printf("\n\n");

    return (0);
}

// *** Function definition of myAddition() ***
void myAddition(void) // function definition
{

    // variable declarations : local variables to myAddition()
    int a_ra, b_ra, sum_ra;

    // code
    printf("\n\n");
    printf("Enter integer value for 'A' for addition : ");
    scanf("%d", &a_ra);

    printf("\n\n");
    printf("Enter integer value for 'B' for addition : ");
    scanf("%d", &b_ra);

    sum_ra = a_ra + b_ra;

    printf("\n\n");
    printf("Sum of %d and %d = %d\n\n", a_ra, b_ra, sum_ra);
}

// *** Function definition of mySubtraction() ***
int mySubtraction(void) // function definition
{

    // variable declarations : local variables to mySubtraction()
    int a_ra, b_ra, subtraction_ra;

    // code
    printf("\n\n");
    printf("Enter integer value for 'A' for Subtraction : ");
    scanf("%d", &a_ra);

    printf("\n\n");
    printf("Enter integer value for 'B' for Subtraction : ");
    scanf("%d", &b_ra);

    subtraction_ra = a_ra - b_ra;
    return (subtraction_ra);
}

// *** Function definition of myMultiplication() ***
void myMultipliction(int a_ra, int b_ra) // function definition
{

    // variable declarations : local variables to myMultiplication()
    int multiplication_ra;

    // code
    multiplication_ra = a_ra * b_ra;

    printf("\n\n");
    printf("Multiplication of %d and %d = %d\n\n", a_ra, b_ra, multiplication_ra);
}

// *** Function definition of myDivision() ***
int myDivision(int a_ra, int b_ra) // function definition
{

    // variable declarations : local variables to myDivision()
    int division_quotient_ra;

    // code
    if (a_ra > b_ra)
    {
        division_quotient_ra = a_ra / b_ra;
    }
    else
    {
        division_quotient_ra = b_ra / a_ra;
    }

    return (division_quotient_ra);
}
