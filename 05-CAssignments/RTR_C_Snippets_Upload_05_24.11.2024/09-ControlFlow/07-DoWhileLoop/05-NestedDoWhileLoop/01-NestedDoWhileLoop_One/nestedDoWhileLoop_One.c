#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra, j_ra;

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
            j_ra++;
        } while (j_ra <= 2);

        i_ra++;
        printf("\n");
    } while (i_ra <= 4);

    i_ra++;
    printf("\n");

    return (0);
}