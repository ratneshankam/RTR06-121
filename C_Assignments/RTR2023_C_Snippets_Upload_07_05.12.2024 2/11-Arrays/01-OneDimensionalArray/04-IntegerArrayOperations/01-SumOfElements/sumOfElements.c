#include <stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
    // variable declarations
    int iArray_ra[NUM_ELEMENTS];
    int i_ra, num_ra, sum_ra = 0;

    // code
    printf("\n\n");
    printf("Enter integer elements for array : \n");
    for (i_ra = 0; i_ra < NUM_ELEMENTS; i_ra++)
    {
        scanf("%d", &num_ra);
        iArray_ra[i_ra] = num_ra;
    }

    for (i_ra = 0; i_ra < NUM_ELEMENTS; i_ra++)
    {
        sum_ra += iArray_ra[i_ra];
    }

    printf("\n\n");
    printf("\nSum of all array elements = %d\n", sum_ra);

    return (0);
}