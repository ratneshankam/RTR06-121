#include <stdio.h>

#define MAX_STRING_LENGTH 512

#define SPACE ' '
#define FULLSTOP '.'
#define COMMA ','
#define EXCLAMATION '!'
#define QUESTION_MARK '?'

int main(void)
{
    // function prototypes
    int myStrlen(char[]);
    char myToUpper(char);

    // variable declarations
    char chArray_ra[MAX_STRING_LENGTH], chArray_CapitalizedFirstLetterOfEveryWord_ra[MAX_STRING_LENGTH]; // A character array is a string
    int iStringLength_ra = 0;
    int i_ra = 0, j_ra = 0;

    // code

    // *** STRING INPUT ***
    printf("\n\n");
    printf("Enter a string : \n\n");
    gets_s(chArray_ra, MAX_STRING_LENGTH);

    iStringLength_ra = myStrlen(chArray_ra);

    for (i_ra = 0; i_ra < iStringLength_ra; i_ra++)
    {
        if (i_ra == 0) // first letter of any sentence must be a CAPITAL LETTER
        {
            chArray_CapitalizedFirstLetterOfEveryWord_ra[j_ra] = myToUpper(chArray_ra[i_ra]);
        }
        else if (chArray_ra[i_ra] == SPACE) // first letter of every word must be a CAPITAL LETTER. words are separated by spaces.
        {
            chArray_CapitalizedFirstLetterOfEveryWord_ra[j_ra] = (chArray_ra[i_ra]);
            chArray_CapitalizedFirstLetterOfEveryWord_ra[j_ra + 1] = myToUpper(chArray_ra[i_ra + 1]);

            // since, already two characters (at indices 'i_ra' and 'i_ra + 1' have been considered in this else-if block... we are extra-incrementing 'i_ra' and 'j_ra' by 1)

            j_ra++;
            i_ra++;
        }
        else if ((chArray_ra[i_ra] == FULLSTOP || chArray_ra[i_ra] == COMMA || chArray_ra[i_ra] == EXCLAMATION || chArray_ra[i_ra] == QUESTION_MARK) && (chArray_ra[i_ra] != SPACE)) // first letter of every word after punctuation mark, in the sentence must be a CAPITAL LETTER. words are separated by punctuations.
        {
            chArray_CapitalizedFirstLetterOfEveryWord_ra[j_ra] = chArray_ra[i_ra];
            chArray_CapitalizedFirstLetterOfEveryWord_ra[j_ra + 1] = SPACE;
            chArray_CapitalizedFirstLetterOfEveryWord_ra[j_ra + 2] = myToUpper(chArray_ra[i_ra + 1]);

            // since, already two characters (at indices 'i_ra' and 'i_ra + 1' have been considered in this else-if block... we are extra-incrementing 'i_ra' by 1)
            // since, already three characters (at indices 'j_ra' and 'j_ra + 1' have been considered in this else-if block... we are extra-incrementing 'j_ra' by 2)

            j_ra += 2;
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

char myToUpper(char ch_ra)
{
    // variable declaration
    int num_ra = 0, c_ra = 0;

    // code

    // ascii value of 'a' (97) - ascii value of 'A' (65) = 32
    // this subtraction will give the exact difference between the upper and lower case counterparts of each letter of the alphabet
    // If this difference is subtracted from the ascii value of a lower case letter, the resultant ascii value will be that of its upper case counter-part, hence, helping us to find its upper case letter !!!
    // ascii values of 'a' (97) to 'z' (122)
    // ascii values of 'A' (65) to 'Z' (90)

    num_ra = 'a' - 'A';

    if ((int)ch_ra >= 97 && (int)ch_ra <= 122)
    {
        c_ra = (int)ch_ra - num_ra;
        return ((char)c_ra);
    }
    else
        return (ch_ra);
}