#include <stdio.h>

int main(void)
{
    // function declarations
    void swapNumbers(int, int);

    // variables declaration
    int a_ra, b_ra;

    // code
    printf("\n\n");
    printf("Enter value for 'A' : ");
    scanf("%d", &a_ra);

    printf("\n\n");
    printf("Enter value for 'B' : ");
    scanf("%d", &b_ra);

    printf("\n\n");
    printf("****** Before Swapping ******\n");
    printf("Value of 'A' = %d\n", a_ra);
    printf("Value of 'B' = %d\n", b_ra);

    swapNumbers(a_ra, b_ra); // argument passed 'By Value'

    printf("\n\n");
    printf("****** After Swapping ******\n");
    printf("Value of 'A' = %d\n", a_ra);
    printf("Value of 'B' = %d\n", b_ra);

    return (0);
}

// value of 'a_ra' is copied into 'x_ra' and value of 'b_ra' is copied into 'y_ra' ... swapping takes place between 'x_ra' and 'y_ra', not between 'a_ra' and 'b_ra' ...
void swapNumber(int x_ra, int y_ra)
{
    // variable declarations
    int temp_ra;

    // code
    printf("\n\n");
    printf("****** Before Swapping ******\n");
    printf("Value of 'x_ra' = %d\n", x_ra);
    printf("Value of 'y_ra' = %d\n", y_ra);

    temp_ra = x_ra;
    x_ra = y_ra;
    y_ra = temp_ra;

    printf("\n\n");
    printf("****** After Swapping ******\n");
    printf("Value of 'x_ra' = %d\n", x_ra);
    printf("Value of 'y_ra' = %d\n", y_ra);
}