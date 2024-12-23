#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra, j_ra;

    // code
    printf("\n\n");

    i_ra = 1;
    do
    {

        printf("i = %d\n", i_ra);
        printf("--------\n\n");
        j_ra = 1;
        do
        {
            printf("\tj = %d\n", j_ra);
            j_ra++;
        }
        while (j_ra <= 5);
        printf("\n\n");
    }
    while (i_ra <= 10);

    i_ra++;
    printf("\n\n");

    return (0);
}