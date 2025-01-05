#include <stdio.h>

int main(void)
{
    // variable declarations
    int fArray_ra[10];
    int *ptr_fArray_ra = NULL;
    int i_ra;

    // code
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        fArray_ra[i_ra] = (float)(i_ra + 1) * 3;
    }

    // *** Name of any array is it's base address ***
    // *** Hence, 'fArray_ra' is the base address of array fArray_ra[] OR 'fArray_ra' is the address of element fArray_ra[0] ***
    // *** Assigning base address of array 'fArray_ra[]' to float pointer 'ptr_fArray_ra'

    ptr_fArray_ra = fArray_ra; // ptr_fArray_ra = &fArray_ra[0];

    printf("\n\n");
    printf("Element of the float array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("fArray_ra[%d] = %d\n ", i_ra, *(ptr_fArray_ra + i_ra));
    }

    printf("\n\n");
    printf("Element of the float array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("fArray_ra[%d] = %d \t \t address = %p\n ", i_ra, *(ptr_fArray_ra + i_ra), (ptr_fArray_ra + i_ra));
    }

    printf("\n\n");

    return (0);
}