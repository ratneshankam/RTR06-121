#include <stdio.h>

int main(void)
{
    // variable declarations
    int cArray_ra[10];
    int i_ra;

    // code
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        cArray_ra[i_ra] = (char)(i_ra + 65);
    }

    printf("\n\n");
    printf("Element of the double array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("cArray_ra[%d] = %d\n ", i_ra, cArray_ra[i_ra]);
    }

    printf("\n\n");
    printf("Element of the double array : \n\n");
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("cArray_ra[%d] = %d \t \t address = %p\n ", i_ra, cArray_ra[i_ra], &cArray_ra[i_ra]);
    }

    printf("\n\n");

    return (0);
}