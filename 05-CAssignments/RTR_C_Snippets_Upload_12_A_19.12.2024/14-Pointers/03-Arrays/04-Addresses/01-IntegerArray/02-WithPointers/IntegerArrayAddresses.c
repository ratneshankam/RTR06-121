#include <stdio.h>

int main(void)
{
    // variable declarations
    int iArray_ra[10];
    int *ptr_iArray_ra = NULL;
    int i_ra;

    // code
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        iArray_ra[i_ra] = (i_ra + 1) * 3;
    }

    // *** Name of any array is it's base address ***
    // *** Hence, 'iArray_ra' is the base address of array iArray_ra[] OR 'iArray_ra' is the address of element iArray_ra[0] ***
    // *** Assigning base address of array 'iArray_ra[]' to integer pointer 'ptr_iArray_ra'

    ptr_iArray_ra = iArray_ra; // ptr_iArray_ra = &iArray_ra[0];

    printf("\n\n");
    printf("Element of the integer array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("iArray_ra[%d] = %d\n ", i_ra, *(ptr_iArray_ra + i_ra));
    }

    printf("\n\n");
    printf("Element of the integer array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("iArray_ra[%d] = %d \t \t address = %p\n ", i_ra, *(ptr_iArray_ra + i_ra), (ptr_iArray_ra + i_ra));
    }

    printf("\n\n");

    return (0);
}