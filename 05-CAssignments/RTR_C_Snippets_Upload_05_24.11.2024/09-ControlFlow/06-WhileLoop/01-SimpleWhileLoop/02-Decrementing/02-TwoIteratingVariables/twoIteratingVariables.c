
#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra, j_ra;

    // code
    printf("\n\n");

    printf("Printing Digits 10 to 1 and 100 to 10 : \n\n");

    i_ra = 10;
    j_ra = 100;
    while (i_ra >= 1, j_ra >= 10)
    {
        printf("\t %d \t %d\n", i_ra, j_ra);
        i_ra--;
        j_ra -= 10;
    }

    printf("\n\n");

    return (0);
}