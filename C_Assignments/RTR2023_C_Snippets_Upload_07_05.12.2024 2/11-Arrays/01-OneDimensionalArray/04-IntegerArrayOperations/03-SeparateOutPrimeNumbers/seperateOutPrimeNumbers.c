#include <stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
    // variable declarations
    int iArray_ra[NUM_ELEMENTS];
    int i_ra = 0, j_ra = 0, num_ra = 0, count_ra = 0;

    // code
    printf("\n\n");

    // *** ARRAY ELEMENTS INPUT ***
    printf("Enter integer elements for array : \n");
    for (i_ra = 0; i_ra < NUM_ELEMENTS; i_ra++)
    {
        scanf("%d", &num_ra);

        // If 'num_ra' is negative ( < 0), then convert it to positive (multiply by -1)

        if (num_ra < 0)
        {
            num_ra = num_ra * -1;
        }
        iArray_ra[i_ra] = num_ra;
    }

    // *** PRINTING ENTIRE ARRAY ***
    printf("\n\n");
    printf("Array Elements Are : \n");
    for (i_ra = 0; i_ra < NUM_ELEMENTS; i_ra++)
    {
        printf("%d ", iArray_ra[i_ra]);
    }

    // *** SEPARATING OUT PRIME NUMBERS FROM ARRAY ELEMENTS ***
    printf("\n\n");
    printf("Prime Numbers Amongst The Array Elements Are : \n");
    for (i_ra = 0; i_ra < NUM_ELEMENTS; i_ra++)
    {
        for (j_ra = 1; j_ra <= iArray_ra[i_ra]; j_ra++)
        {
            if ((iArray_ra[i_ra] % j_ra) == 0)
            {
                count_ra++;
            }
        }

        // number 1 is neither a prime nor a consonant
        // if a number is prime, it is only divisible by 1 and itself.
        // hence, if a number is prime, the value of 'count' will be exactly 2.
        // if the value of 'count' is greater than 2, the number is divisible by numbers other than 1 and itself and hence, it is not prime
        // the value of 'count' will be 1 only if iArray[i] is 1.

        if (count_ra == 2)
        {
            printf("%d ", iArray_ra[i_ra]);
            count_ra = 0; // Reset 'count' to 0 for checking the next number...
        }

        return (0);
    }