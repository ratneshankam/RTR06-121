#include <stdio.h>

int main(void)
{

    // variable declarations
    int a_ra, b_ra, p_ra;

    // code
    a_ra = 9;
    b_ra = 30;
    p_ra = 30;

    // *** FIRST if-else PAIR ***
    printf("\n\n");
    if (a_ra < b_ra)
    {
        printf("Entering First if-block...\n\n");
        printf("A is less than B !!!\n\n");
    }
    else
    {
        printf("Entering First else-block...\n\n");
        printf("A is NOT less than B !!!\n\n");
    }
    printf("First if-else Pair Done !!!\n\n");

    // *** SECOND if-else PAIR ***
    printf("\n\n");
    if (b_ra != p_ra)
    {
        printf("Entering Second if-block...\n\n");
        printf("B is NOT equal to P !!!\n\n");
    }
    else
    {
        printf("Entering Second else-block...\n\n");
        printf("B is equal to P !!!\n\n");
    }
    printf("Second if-else Pair Done !!!\n\n");

    return (0);
}