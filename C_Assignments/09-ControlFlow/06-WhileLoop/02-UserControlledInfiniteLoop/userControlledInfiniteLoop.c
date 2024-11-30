
#include <stdio.h>

int main(void)
{
    // variable declarations
    char option_ra, ch_ra = '\0';

    // code
    printf("\n\n");

    printf("Once the infinite loop begins, enter 'Q' or 'q' to quit the infinite while loop : \n\n");

    printf("Enter 'Y' or 'y' to initiate user controlled infinite loop : \n\n");

    option_ra = getch();
    if (option_ra == 'Y' || option_ra == 'y')
    {
        while (1) // Infinite loop
        {
            printf("In Loop...\n");
            ch_ra = getch();
            if (ch_ra == 'Q' || ch_ra == 'q')
            {
                break; // user controlled exiting from infinite loop
            }
        }
        printf("\n\n");
        printf("EXITING USER CONTROLLED INFINITE LOOP...");
        printf("\n\n");
    }
    else
    {
        printf("You must press 'Y' or 'y' to initiate user controlled infinite loop...Please try again...\n\n");
    }

    return (0);
}