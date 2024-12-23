#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra, j_ra, c_ra;

    // code
    printf("\n\n");

    i_ra = 0;
    while (i_ra < 64)
    {

        j_ra = 0;
        while (j_ra < 64)
        {
            c_ra = ((i_ra & 0x8) == 0) ^ ((j_ra & 0x8) == 0);

            if (c_ra == 0)
            {
                printf("* ");
            }
            if (c_ra == 1)
            {
                printf("  ");
            }

            j_ra++;
        }
        printf("\n");
        i_ra++;
    }

    printf("\n\n");

    return (0);
}