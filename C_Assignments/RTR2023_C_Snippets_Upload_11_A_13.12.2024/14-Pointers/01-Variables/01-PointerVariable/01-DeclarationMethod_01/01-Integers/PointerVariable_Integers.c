#include <stdio.h>

int main(void)
{
    // variable declarations
    int num_ra;
    int *ptr_ra = NULL; // Declaration method 1 : '*ptr_ra' is a variable of type 'int'

    // code
    num_ra = 10;

    printf("\n\n");

    printf("********* Before ptr_ra = &num_ra *********\n");
    printf("Value of num_ra            : %d\n", num_ra);
    printf("Address of num_ra          : %p\n", &num_ra);
    printf("Value at address of num_ra : %d\n", *(&num_ra));

    // assigning address of variable 'num_ra' to pointer variable 'ptr_ra'
    // 'ptr_ra' now contains address of variable 'num_ra' ... hence, 'ptr_ra'  is SAME as '&num_ra'

    ptr_ra = &num_ra;

    printf("\n\n");

    printf("********* After ptr_ra = &num_ra *********\n");
    printf("Value of num_ra            : %d\n", num_ra);
    printf("Address of num_ra          : %p\n", ptr_ra);
    printf("Value at address of num_ra : %d\n", *ptr_ra);

    return (0);
}