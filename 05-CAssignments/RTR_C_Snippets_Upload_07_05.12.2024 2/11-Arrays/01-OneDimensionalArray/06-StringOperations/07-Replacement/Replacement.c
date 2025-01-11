#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    // function prototypes
    int myStrlen(char[]);
    void myStrcpy(char[], char[]);

    // variable declarations
    char chArray_original_ra[MAX_STRING_LENGTH], chArray_vowelsReplaced_ra[MAX_STRING_LENGTH]; // A character array is a string
    int iStringLength_ra = 0;
    int i_ra = 0;

    // code

    // *** STRING INPUT ***
    printf("\n\n");
    printf("Enter a string : \n\n");
    gets_s(chArray_original_ra, MAX_STRING_LENGTH);

    // *** STRING OUTPUT ***
    myStrcpy(chArray_vowelsReplaced_ra, chArray_original_ra);

    iStringLength_ra = myStrlen(chArray_vowelsReplaced_ra);

    for (i_ra = 0; i_ra < iStringLength_ra; i_ra++)
    {
        switch (chArray_vowelsReplaced_ra[i_ra])
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            chArray_vowelsReplaced_ra[i_ra] = '*';
            break;
        default:
            break;
        }
    }

    // *** STRING OUTPUT ***
    printf("\n\n");
    printf("string entered by you is : \n\n");
    printf("%s\n", chArray_original_ra);

    printf("\n\n");
    printf("string after replacement of vowels by * is : \n\n");
    printf("%s\n", chArray_vowelsReplaced_ra);

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
void myStrcpy(char str_destination_ra[], char str_source_ra[])
{
    // function prototypes
    int myStrlen(char[]);

    // variable declarations
    int j_ra;
    int istring_length_ra = 0;

    // code
    istring_length_ra = myStrlen(str_source_ra);
    for (j_ra = 0; j_ra < istring_length_ra; j_ra++)
    {
        (str_destination_ra[j_ra] = str_source_ra[j_ra]);
    }
    (str_destination_ra[j_ra] = '\0');
}