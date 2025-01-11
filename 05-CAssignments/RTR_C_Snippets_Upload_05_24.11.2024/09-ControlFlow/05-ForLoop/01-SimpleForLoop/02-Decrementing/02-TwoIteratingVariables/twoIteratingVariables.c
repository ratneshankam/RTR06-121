
#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra, j_ra;

    // code
    printf("\n\n");

    printf("Printing Digits 1 to 10 : \n\n");

    // i <= 10, j <= 100; it's associativity is right to left (gives priority to j<= 100 first)
    for (i_ra = 10, j_ra = 100; i_ra >= 1, j_ra >= 10; i_ra--, j_ra -= 10)
    {
        printf("\t %d \t %d\n", i_ra, j_ra);
    }

    printf("\n\n");

    return (0);
}