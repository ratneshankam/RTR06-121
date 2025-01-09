#include <stdio.h>

int main(void)
{
    // variable declarations
    int num_ra = 0;
    int *ptr_ra = NULL;
    int *copy_ptr_ra = NULL;

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

    printf("Answer of (ptr_ra + 10) = %p\n", (ptr_ra + 10));
    printf("Answer of *(ptr_ra + 10) = %d\n", *(ptr_ra + 10));
    printf("Answer of (*ptr_ra + 10) = %d\n", (*ptr_ra + 10));
    ++*ptr_ra;
    printf("Answer of ++(*ptr_ra) = %d\n", (*ptr_ra));
    *ptr_ra++;
    printf("Answer of (*ptr_ra)++ = %d\n", (*ptr_ra));
    ptr_ra = &num_ra;
    (*ptr_ra)++;
    printf("Answer of (*ptr_ra)++ = %d\n", (*ptr_ra));

    return (0);
}