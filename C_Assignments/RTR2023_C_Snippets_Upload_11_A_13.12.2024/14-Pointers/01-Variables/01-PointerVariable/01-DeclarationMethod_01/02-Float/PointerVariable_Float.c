#include <stdio.h>

int main(void)
{
    // variable declarations
    float num_ra;
    float *ptr_ra = NULL; // Declaration method 1 : '*ptr_ra' is a variable of type 'float'

    // code
    num_ra = 6.5f;

    printf("\n\n");

    printf("********* Before ptr_ra = &num_ra *********\n");
    printf("Value of num_ra            : %f\n", num_ra);
    printf("Address of num_ra          : %p\n", &num_ra);
    printf("Value at address of num_ra : %f\n", *(&num_ra));

    // assigning address of variable 'num_ra' to pointer variable 'ptr_ra'
    // 'ptr_ra' now contains address of variable 'num_ra' ... hence, 'ptr_ra'  is SAME as '&num_ra'

    ptr_ra = &num_ra;

    printf("\n\n");

    printf("********* After ptr_ra = &num_ra *********\n");
    printf("Value of num_ra            : %f\n", num_ra);
    printf("Address of num_ra          : %p\n", ptr_ra);
    printf("Value at address of num_ra : %f\n", *ptr_ra);

    return (0);
}