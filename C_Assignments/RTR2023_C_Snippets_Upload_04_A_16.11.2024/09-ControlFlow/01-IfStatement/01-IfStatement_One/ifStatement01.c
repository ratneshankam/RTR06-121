#include <stdio.h>

int main(void)
{
    // variable declarations
    int a_ra, b_ra, p_ra;

    // code
    a_ra = 9;
    b_ra = 30;
    p_ra = 30;

    printf("\n\n");

    if (a_ra < b_ra)
    {
        printf("A is less than B !!!\n\n");
    }

    if (b_ra != p_ra)
    {
        printf("B is not equal to P !!!\n\n");
    }

    printf("Both comparisons have been done !!!\n\n");

    return (0);
}