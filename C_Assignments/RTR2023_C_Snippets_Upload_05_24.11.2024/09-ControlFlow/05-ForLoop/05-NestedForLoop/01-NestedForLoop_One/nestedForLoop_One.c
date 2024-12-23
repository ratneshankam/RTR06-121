#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra, j_ra;

    // code
    printf("\n\n");

    for (i_ra = 1; i_ra <= 10; i_ra++)
    {

        printf("i = %d\n", i_ra);
        printf("--------\n\n");
        for (j_ra = 1; j_ra <= 5; j_ra++)
        {
            printf("\tj = %d\n", j_ra);
        }
        printf("\n\n");
    }

    printf("\n\n");

    return (0);
}