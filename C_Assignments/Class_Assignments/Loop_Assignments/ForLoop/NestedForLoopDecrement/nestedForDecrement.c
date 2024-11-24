#include <stdio.h>

int main(void)
{
    printf("Start Main !!\n\n");

    // variable declarations
    int i_ra = 0, j_ra = 0;

    for (i_ra = 5; i_ra >= 1; i_ra--)
    {
        printf("i = %d\n", i_ra);
        for (j_ra = 3; j_ra >= 1; j_ra--)
        {
            printf("j = %d ; ", j_ra);
        }
        printf("\n\n");
    }

    printf("End Main !!\n\n");
}