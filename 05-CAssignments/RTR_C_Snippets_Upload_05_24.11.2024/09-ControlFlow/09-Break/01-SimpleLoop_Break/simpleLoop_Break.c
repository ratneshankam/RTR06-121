#include <stdio.h>

int main(void)
{
    // varaible declarations
    int i_ra;
    char ch_ra;

    // code
    printf("\n\n");

    printf("Printing even numbers from 1 to 100 for every user input. exiting the loop when user enters character 'Q' or 'q' : \n\n");
    printf("Enter character 'Q' or 'q' to exit the loop : \n\n");

    for (i_ra = 1; i_ra <= 100; i_ra++)
    {
        printf("%d\n", i_ra);
        ch_ra = getch();
        if (ch_ra == 'Q' || ch_ra == 'q')
        {
            break;
        }
    }

    printf("\n\n");
    printf("Exiting loop...");
    printf("\n\n");

    return (0);
}