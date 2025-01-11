#include <stdio.h>

int main(void)
{
    // varaible declarations
    int i_ra, j_ra;

    // code
    printf("\n\n");

    for (i_ra = 1; i_ra <= 20; i_ra++)
    {

        for (j_ra = 1; j_ra <= 20; j_ra++)
        {
            if (j_ra > i_ra)
            {
                break;
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    printf("\n\n");

    return (0);
}