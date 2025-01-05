#include <stdio.h>

int main(void)
{
    // variable declarations
    int num_ra = 0;
    const int *ptr_ra = NULL; // read this line from right to left => 'ptr_ra' is a pointer (*) to integer (int) constant (const).

    // code
    num_ra = 5;
    ptr_ra = &num_ra;

    printf("\n\n");
    printf("  num_ra        = %d\n", num_ra);
    printf("  &num_ra       = %p\n", &num_ra);
    printf("  *(&num_ra)    = %d\n", *(&num_ra));
    printf("  ptr_ra        = %p\n", ptr_ra);
    printf("  *ptr_ra       = %d\n", *ptr_ra);
    printf("\n\n");

    return (0);
}