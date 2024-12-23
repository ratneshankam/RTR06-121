#include <stdio.h>
#include <ctype.h> // for toupper()

#define MAX_STRING_LENGTH 512

int main(void)
{
    // function prototypes
    int myStrlen(char[]);

    // variable declarations
    char chArray_ra[MAX_STRING_LENGTH], chArray_CapitalizedFirstLetterOfEveryWord_ra[MAX_STRING_LENGTH]; // A character array is a string
    int iStringLength_ra = 0;
    int i_ra = 0, j_ra = 0;

    // code

    // *** STRING INPUT ***
    printf("\n\n");
    printf("Enter a string : \n\n");
    get_s(chArray_ra, MAX_STRING_LENGTH);

    iStringLength_ra = myStrlen(chArray_ra);

    for (i_ra = 0; i_ra < iStringLength_ra; i_ra++)
    {
        if (i_ra == 0)
        {
            chArray_CapitalizedFirstLetterOfEveryWord_ra[j_ra] = toupper(chArray_ra[i_ra]);
        }
        else if (chArray_ra[i_ra] == ' ')
        {
            chArray_CapitalizedFirstLetterOfEveryWord_ra[j_ra] = (chArray_ra[i_ra]);
            chArray_CapitalizedFirstLetterOfEveryWord_ra[j_ra + 1] = toupper(chArray_ra[i_ra + 1]);

            // since, already two characters (at indices 'i_ra' and 'i_ra + 1' have been considered in this else-if block... we are extra-incrementing 'i_ra' and 'j_ra' by 1)

            j_ra++;
            i_ra++;
        }
        else
        {
            chArray_CapitalizedFirstLetterOfEveryWord_ra[j_ra] = chArray_ra[i_ra];
        }
        j_ra++;
    }

    chArray_CapitalizedFirstLetterOfEveryWord_ra[j_ra] = '\0';

    // *** STRING OUTPUT ***
    printf("\n\n");
    printf("string entered by you is : \n\n");
    printf("%s\n", chArray_ra);

    printf("\n\n");
    printf("String after capitalizing first letter of every word : \n\n");
    printf("%s\n", chArray_CapitalizedFirstLetterOfEveryWord_ra);

    return (0);
}

int myStrlen(char str_ra[])
{
    // variable declarations
    int j_ra;
    int string_length_ra = 0;

    // code
    // *** Determining exact length of the string, by detecting the first occurence of null-terminating character (\0) ***
    for (j_ra = 0; j_ra < MAX_STRING_LENGTH; j_ra++)
    {
        if (str_ra[j_ra] == '\0')
        {
            break;
        }
        else
        {
            string_length_ra++;
        }
    }
    return (string_length_ra);
}