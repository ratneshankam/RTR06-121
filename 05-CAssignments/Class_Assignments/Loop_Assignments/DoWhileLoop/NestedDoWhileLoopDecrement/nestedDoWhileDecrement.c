#include <stdio.h>

int main(void)
{
    printf("Start Main !!\n\n");

    // variable declarations
    int i_ra = 5, j_ra = 0;

    do
    {
        printf("i = %d\n", i_ra);
        j_ra = 3;
        do
        {
            printf("j = %d ; ", j_ra);
            j_ra--;
        } while (j_ra >= 1);

        printf("\n\n");
        i_ra--;
    } while (i_ra >= 1);

    printf("End Main !!\n\n");
}