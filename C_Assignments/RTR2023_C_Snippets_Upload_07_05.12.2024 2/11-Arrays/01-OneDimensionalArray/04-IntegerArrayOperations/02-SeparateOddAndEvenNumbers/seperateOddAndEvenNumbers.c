#include <stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
    // variable declarations
    int iArray_ra[NUM_ELEMENTS];
    int i_ra, num_ra, sum_ra = 0;

    // code
    printf("\n\n");

    // *** ARRAY ELEMENTS INPUT ***
    printf("Enter integer elements for array : \n");
    for (i_ra = 0; i_ra < NUM_ELEMENTS; i_ra++)
    {
        scanf("%d", &num_ra);
        iArray_ra[i_ra] = num_ra;
    }

    // *** SEPARATING OUT EVEN NUMBERS FROM ARRAY ELEMENTS ***
    printf("\n\n");
    printf("Even numbers amongst the array elements are : \n");
    for (i_ra = 0; i_ra < NUM_ELEMENTS; i_ra++)
    {
        if (iArray_ra[i_ra] % 2 == 0)
        {
            printf("%d ", iArray_ra[i_ra]);
        }
    }

    // *** SEPARATING OUT ODD NUMBERS FROM ARRAY ELEMENTS ***
    printf("\n\n");
    printf("Odd numbers amongst the array elements are : \n");
    for (i_ra = 0; i_ra < NUM_ELEMENTS; i_ra++)
    {
        if (iArray_ra[i_ra] % 2 != 0)
        {
            printf("%d ", iArray_ra[i_ra]);
        }
    }

    return (0);
}