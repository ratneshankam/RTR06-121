#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra, j_ra, k_ra;

    // code
    printf("\n");

    i_ra = 1;
    while (i_ra <= 5)
    {

        printf("i = %d\n", i_ra);
        printf("--------\n");
        j_ra = 1;
        while (j_ra <= 3)
        {
            printf("\tj = %d\n", j_ra);
            printf("\t--------\n");
            k_ra = 1;
            while (k_ra <= 2)
            {
                printf("\t\tk = %d\n", k_ra);
                k_ra++;
            }

            printf("\n");
            j_ra++;
        }
        printf("\n");
        i_ra++;
    }

    printf("\n");

    return (0);
}