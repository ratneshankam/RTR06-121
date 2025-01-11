#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra, j_ra, c_ra;

    // code
    printf("\n\n");

    i_ra = 0;
    do
    {

        j_ra = 0;
        do
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
            
        } while (j_ra < 64);
        printf("\n");
        i_ra++;
    } while (i_ra < 64);

    printf("\n\n");

    return (0);
}