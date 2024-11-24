#include <stdio.h>

int main(void)
{
    printf("Start Main !!\n\n");

    // variable declarations
    int i_ra = 5, j_ra = 0;

    while (i_ra >= 1)
    {
        printf("i = %d\n", i_ra);
        j_ra = 3;
        while (j_ra >= 1)
        {
            printf("j = %d ; ", j_ra);
            j_ra--;
        }

        printf("\n\n");
        i_ra--;
    }

    printf("End Main !!\n\n");
}