#include <stdio.h>

int main(void)
{
    // variable declarations
    int iArray_ra[10];
    int i_ra;

    // code
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        iArray_ra[i_ra] = (i_ra + 1) * 3;
    }

    printf("\n\n");
    printf("Element of the integer array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("iArray_ra[%d] = %d\n ", i_ra, iArray_ra[i_ra]);
    }

    printf("\n\n");
    printf("Element of the integer array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("iArray_ra[%d] = %d \t \t address = %p\n ", i_ra, iArray_ra[i_ra], &iArray_ra[i_ra]);
    }

    printf("\n\n");

    return (0);
}