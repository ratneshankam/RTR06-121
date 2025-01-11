#include <stdio.h>

int main(void)
{
    // varaible declarations
    int i_ra, j_ra;

    // code
    printf("\n\n");

    printf("Outer loop prints odd numbers between 1 to 10. \n\n");
    printf("Inner loop prints even numbers between 1 to 10 for every odd number printed by outer loop. \n\n");

    // condition for a number to be even number => division of number by 2 leaves no remainder (remainder = 0)
    // condition for a number to be odd number => division of number by 2 leaves remainder (remainder = 1 (usually))

    for (i_ra = 1; i_ra <= 10; i_ra++)
    {
        if (i_ra % 2 != 0)
        {
            printf("i = %d\n", i_ra);
            printf("-------------\n");
            for (j_ra = 1; j_ra <= 10; j_ra++)
            {
                if (j_ra % 2 == 0)
                {
                    printf("j = %d\n", j_ra);
                }
                else
                {
                    continue;
                }
            }
            printf("\n\n");
        }
        else
        {
            continue;
        }
    }

    printf("\n\n");

    return (0);
}