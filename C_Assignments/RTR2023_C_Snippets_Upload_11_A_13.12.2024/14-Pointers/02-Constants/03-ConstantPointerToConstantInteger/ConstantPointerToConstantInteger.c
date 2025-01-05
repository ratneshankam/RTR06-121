#include <stdio.h>

int main(void)
{
    // variable declarations
    int num_ra = 5;
    const int* const ptr_ra = &num_ra;

    // code
    printf("\n");
    printf("Current Value of num_ra: %d\n", num_ra);
    printf("Current 'ptr_ra' (address of 'num_ra'): %p\n", ptr_ra);

    num_ra++;
    printf("\n\n");
    printf("After num_ra++, value of num_ra = %d\n", num_ra);

    // ptr_ra++;
    // (*ptr_ra)++;

    printf("\n\n");
    printf("After (*ptr_ra)++, value of ptr_ra = %p\n", ptr_ra);
    printf("Value at this 'ptr_ra' = %d\n", *ptr_ra);
    printf("\n");

    return (0);
}