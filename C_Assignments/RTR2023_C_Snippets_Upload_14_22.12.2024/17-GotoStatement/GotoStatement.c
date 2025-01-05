#include <stdio.h>
#include <string.h> // for toupper()

int main(void)
{
    // variable declarations
    char ch_ra, ch_i_ra;
    unsigned int ascii_ch_ra = 0;

    // code
    printf("\n\n");
    printf("Enter the first character of first name : ");
    ch_ra = getch();

    ch_ra = toupper(ch_ra);

    for (ch_i_ra = 0; ch_i_ra < 'Z'; ch_i_ra++)
    {
        if (ch_i_ra == ch_ra)
        {
            ascii_ch_ra = (unsigned int)ch_ra;
            goto result_ouput_ra; // program flow jumps directly to label 'result_ouput_ra'
        }
    }
    printf("\n\n");
    printf("Goto statement not executed, so printing \"Hello, world!!!\".\n"); // will be omitted if 'goto' statement is executed

result_ouput_ra: // label itself does not alter flow of program, following code is executed regardless of whether goto statement is executed or not.

    printf("\n\n");

    if (ascii_ch_ra == 0)
    {
        printf("You much have a strange name! could not find the character '%c' in the entire english alphabet!\n", ch_ra);
    }
    else
    {
        printf("You must have a strange name! could not find the character '%c' in the entire english alphabet!\n", ch_ra);
    }
    printf("\n\n");

    return (0);
}