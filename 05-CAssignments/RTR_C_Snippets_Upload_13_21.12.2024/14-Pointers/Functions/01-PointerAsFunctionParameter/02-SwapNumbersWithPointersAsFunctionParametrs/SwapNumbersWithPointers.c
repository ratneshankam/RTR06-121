#include <stdio.h>

int main(void)
{
    // function declarations
    void swapNumbers(int *, int *);

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

    swapNumbers(&a_ra, &b_ra); // argument passed 'By Reference / Address'

    printf("\n\n");
    printf("****** After Swapping ******\n");
    printf("Value of 'A' = %d\n", a_ra);
    printf("Value of 'B' = %d\n", b_ra);

    return (0);
}

// Address of 'a_ra' is copied into 'x_ra' and Address of 'b_ra' is copied into 'y_ra' ... So, '&a_ra' and 'x_ra' are pointing to One and the same address and '&b' and 'y_ra' are pointing to one and the same address ...
// Swapping takes place between 'value at address of x_ra' and 'value at address of y_ra'
// Hence, swapping in this case takes place between '*x' and '*y' as well as between 'a_ra' and 'b_ra' ...
void swapNumbers(int *x_ra, int *y_ra)
{
    // variable declarations
    int temp_ra;

    // code
    printf("\n\n");
    printf("****** Before Swapping ******\n");
    printf("Value of 'x_ra' = %d\n", *x_ra);
    printf("Value of 'y_ra' = %d\n", *y_ra);

    temp_ra = *x_ra;
    *x_ra = *y_ra;
    *y_ra = temp_ra;

    printf("\n\n");
    printf("****** After Swapping ******\n");
    printf("Value of 'x_ra' = %d\n", *x_ra);
    printf("Value of 'y_ra' = %d\n", *y_ra);
}