#include <stdio.h>

int main(void)
{
    // variable declarations
    int dArray_ra[10];
    int *ptr_dArray_ra = NULL;
    int i_ra;

    // code
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        dArray_ra[i_ra] = (double)(i_ra + 1) * 1.3333333;
    }

    // *** Name of any array is it's base address ***
    // *** Hence, 'dArray_ra' is the base address of array dArray_ra[] OR 'dArray_ra' is the address of element dArray_ra[0] ***
    // *** Assigning base address of array 'dArray_ra[]' to double pointer 'ptr_dArray_ra'

    ptr_dArray_ra = dArray_ra; // ptr_dArray_ra = &dArray_ra[0];

    printf("\n\n");
    printf("Element of the double array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("dArray_ra[%d] = %d\n ", i_ra, *(ptr_dArray_ra + i_ra));
    }

    printf("\n\n");
    printf("Element of the double array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("dArray_ra[%d] = %d \t \t address = %p\n ", i_ra, *(ptr_dArray_ra + i_ra), (ptr_dArray_ra + i_ra));
    }

    printf("\n\n");

    return (0);
}