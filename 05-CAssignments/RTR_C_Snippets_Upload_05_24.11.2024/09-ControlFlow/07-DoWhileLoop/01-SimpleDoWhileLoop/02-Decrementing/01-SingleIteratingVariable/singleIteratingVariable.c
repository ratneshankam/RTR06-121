#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra;

    // code
    printf("\n\n");

    printf("Printing Digits 10 to 1 : \n\n");

    i_ra = 10;
    do
    {
        printf("\t%d\n", i_ra);
        i_ra--;
    } while (i_ra >= 1);

    printf("\n\n");

    return (0);
}