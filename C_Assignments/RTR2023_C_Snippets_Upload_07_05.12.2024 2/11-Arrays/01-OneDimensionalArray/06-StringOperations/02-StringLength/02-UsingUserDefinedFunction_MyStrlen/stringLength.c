#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    // variable declarations
    char chArray_ra[MAX_STRING_LENGTH]; // A character array is a string
    int iStringLength_ra;

    // code
    printf("\n\n");
    printf("Enter a string : \n\n");
    gets_s(chArray_ra, MAX_STRING_LENGTH);

    // *** STRING OUTPUT ***
    printf("\n\n");
    printf("String entered by you is : \n\n");
    printf("%s\n", chArray_ra);

    // *** STRING LENGTH ***
    printf("\n\n");
    iStringLength_ra = myStrlen(chArray_ra);
    printf("Length of the string is = %d characters !!!\n", iStringLength_ra);

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