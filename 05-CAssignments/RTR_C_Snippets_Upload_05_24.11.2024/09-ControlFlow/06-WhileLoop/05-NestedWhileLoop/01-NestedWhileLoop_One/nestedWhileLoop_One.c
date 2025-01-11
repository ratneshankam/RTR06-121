#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra, j_ra;

    // code
    printf("\n\n");

    i_ra = 1;
    while (i_ra <= 5)
    {

        printf("i = %d\n", i_ra);
        printf("--------\n\n");
        j_ra = 1;
        while (j_ra <= 3)
        {
            printf("\tj = %d\n", j_ra);
            j_ra++;
        }
        i_ra++;
        printf("\n\n");
    }

    i_ra++;
    printf("\n\n");

    return (0);
}