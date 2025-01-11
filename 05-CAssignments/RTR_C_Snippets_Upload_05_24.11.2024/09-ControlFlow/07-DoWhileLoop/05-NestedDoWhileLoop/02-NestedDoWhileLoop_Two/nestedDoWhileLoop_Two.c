#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra, j_ra, k_ra;

    // code
    printf("\n");

    i_ra = 1;
    do
    {

        printf("i = %d\n", i_ra);
        printf("--------\n");
        j_ra = 1;
        do
        {
            printf("\tj = %d\n", j_ra);
            printf("\t--------\n");
            k_ra = 1;
            do
            {
                printf("\t\tk = %d\n", k_ra);
                k_ra++;
            } while (k_ra <= 2);

            printf("\n");
            j_ra++;
        } while (j_ra <= 3);
        printf("\n");
        i_ra++;
    } while (i_ra <= 4);

    printf("\n");

    return (0);
}