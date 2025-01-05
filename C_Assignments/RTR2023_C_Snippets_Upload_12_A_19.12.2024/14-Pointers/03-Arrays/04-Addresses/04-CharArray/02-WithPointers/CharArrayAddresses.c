#include <stdio.h>

int main(void)
{
    // variable declarations
    int cArray_ra[10];
    int *ptr_cArray_ra = NULL;
    int i_ra;

    // code
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        cArray_ra[i_ra] = (char)(i_ra + 65);
    }

    // *** Name of any array is it's base address ***
    // *** Hence, 'cArray_ra' is the base address of array cArray_ra[] OR 'cArray_ra' is the address of element cArray_ra[0] ***
    // *** Assigning base address of array 'cArray_ra[]' to character pointer 'ptr_cArray_ra'

    ptr_cArray_ra = cArray_ra; // ptr_cArray_ra = &cArray_ra[0];

    printf("\n\n");
    printf("Element of the character array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("cArray_ra[%d] = %d\n ", i_ra, *(ptr_cArray_ra + i_ra));
    }

    printf("\n\n");
    printf("Element of the character array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("cArray_ra[%d] = %d \t \t address = %p\n ", i_ra, *(ptr_cArray_ra + i_ra), (ptr_cArray_ra + i_ra));
    }

    printf("\n\n");

    return (0);
}