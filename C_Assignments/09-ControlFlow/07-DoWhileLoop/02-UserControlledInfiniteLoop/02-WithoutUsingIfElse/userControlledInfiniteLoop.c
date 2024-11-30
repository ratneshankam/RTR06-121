
#include <stdio.h>

int main(void)
{
    // variable declarations
    char option_ra, ch_ra = '\0';

    // code
    printf("\n\n");

    printf("Once the infinite loop begins, enter 'Q' or 'q' to quit the infinite do-while loop : \n\n");

    printf("Enter 'Y' or 'y' to initiate user controlled infinite loop : \n\n");

    option_ra = getch();
    do
    {
        do
        {
            printf("\n");
            printf("In Loop...\n");
            ch_ra = getch(); // control flow waits for character input ...
        } while (ch_ra != 'Q' || ch_ra != 'q');

        printf("\n\n");
        printf("EXITING USER CONTROLLED INFINITE LOOP...");
        
        printf("\n\n");
        printf("DO YOU WANT TO BEGIN USER CONTROLLED INFINITE LOOP AGAIN?...(Y/Y - Yes, any other key - No) : ");
        option_ra = getch();
    } while (option_ra == 'Y' || option_ra == 'y');

    return (0);
}