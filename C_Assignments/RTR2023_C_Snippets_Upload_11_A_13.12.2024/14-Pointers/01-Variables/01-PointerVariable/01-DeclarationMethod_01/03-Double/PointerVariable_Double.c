#include <stdio.h>

int main(void)
{
    // variable declarations
    double num_ra;
    double *ptr_ra = NULL; // Declaration method 1 : '*ptr_ra' is a variable of type 'double'

    // code
    num_ra = 2.34343434;

    printf("\n\n");

    printf("********* Before ptr_ra = &num_ra *********\n");
    printf("Value of num_ra            : %lf\n", num_ra);
    printf("Address of num_ra          : %p\n", &num_ra);
    printf("Value at address of num_ra : %lf\n", *(&num_ra));

    // assigning address of variable 'num_ra' to pointer variable 'ptr_ra'
    // 'ptr_ra' now contains address of variable 'num_ra' ... hence, 'ptr_ra'  is SAME as '&num_ra'

    ptr_ra = &num_ra;

    printf("\n\n");

    printf("********* After ptr_ra = &num_ra *********\n");
    printf("Value of num_ra            : %lf\n", num_ra);
    printf("Address of num_ra          : %p\n", ptr_ra);
    printf("Value at address of num_ra : %lf\n", *ptr_ra);

    return (0);
}