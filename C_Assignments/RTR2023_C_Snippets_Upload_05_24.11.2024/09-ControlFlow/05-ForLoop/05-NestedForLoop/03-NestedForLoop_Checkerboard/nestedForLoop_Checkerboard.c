#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra, j_ra, c_ra;

    // code
    printf("\n\n");

    for (i_ra = 0; i_ra < 64; i_ra++)
    {
        // printf("%d | ", i_ra & 0x8);
        // if (i_ra % 2 == 0)
        // {
        //     continue;
        // }
        for (j_ra = 0; j_ra < 64; j_ra++)
        {
            c_ra = ((i_ra & 0x8) == 0) ^ ((j_ra & 0x8) == 0);
            // printf("%d ", ((j_ra & 0x8) == 0));
            // if (j_ra % 2 == 0)
            // {
            //     continue;
            // }
            if (c_ra == 0)
            {
                printf("* ");
            }
            if (c_ra == 1)
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    // printf("%d\n", (1 ^ 0x8));

    printf("\n\n");

    return (0);
}