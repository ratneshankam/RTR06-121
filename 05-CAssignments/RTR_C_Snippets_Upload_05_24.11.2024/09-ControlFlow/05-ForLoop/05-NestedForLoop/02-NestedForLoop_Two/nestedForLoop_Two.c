#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra, j_ra, k_ra;

    // code
    printf("\n");

    for (i_ra = 1; i_ra <= 5; i_ra++)
    {

        printf("i = %d\n", i_ra);
        printf("--------\n");
        for (j_ra = 1; j_ra <= 3; j_ra++)
        {
            printf("\tj = %d\n", j_ra);
            printf("\t--------\n");
            for (k_ra = 1; k_ra <= 2; k_ra++)
            {
                printf("\t\tk = %d\n", k_ra);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("\n");

    return (0);
}