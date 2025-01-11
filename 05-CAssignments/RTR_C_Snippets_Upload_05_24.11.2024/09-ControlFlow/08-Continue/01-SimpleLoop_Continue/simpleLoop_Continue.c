#include <stdio.h>

int main(void)
{
    // varaible declarations
    int i_ra;

    // code
    printf("\n\n");

    printf("Printing even numbers from 0 to 100 : \n\n");

    for (i_ra = 0; i_ra <= 100; i_ra++)
    {
        // condition for a number to be even number => division of number by 2 leaves no remainder (remainder = 0)
        // if remainder is not 0, the number is odd number...
        if (i_ra % 2 != 0)
        {
            continue;
        }
        else
        {

            printf("%d\n", i_ra);
        }
    }
    printf("\n\n");
    return (0);
}