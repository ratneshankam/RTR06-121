#include <stdio.h>

int main(void)
{
    // variable declarations
    int fArray_ra[10];
    int i_ra;

    // code
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        fArray_ra[i_ra] = (float)(i_ra + 1) * 1.5f;
    }

    printf("\n\n");
    printf("Element of the float array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("fArray_ra[%d] = %d\n ", i_ra, fArray_ra[i_ra]);
    }

    printf("\n\n");
    printf("Element of the float array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("fArray_ra[%d] = %d \t \t address = %p\n ", i_ra, fArray_ra[i_ra], &fArray_ra[i_ra]);
    }

    printf("\n\n");

    return (0);
}