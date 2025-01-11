#include <stdio.h>

int main(void)
{

    // variable declarations
    int a_ra;

        // code
        printf("\n\n");

    a_ra = 5;
    if (a_ra) // Non-zero positive value
    {
        printf("if-block 1 : 'A' exists and has value = %d !!!\n\n", a_ra);
    }

    a_ra = -5;
    if (a_ra) // Non-zero negative value
    {
        printf("if-block 2 : 'A' exists and has value = %d !!!\n\n", a_ra);
    }

    a_ra = 0;
    if (a_ra) // Zero value
    {
        printf("if-block 3 : 'A' exists and has value = %d !!!\n\n", a_ra);
    }

    printf("All three if-statements are done !!!\n\n");

    return (0);
}