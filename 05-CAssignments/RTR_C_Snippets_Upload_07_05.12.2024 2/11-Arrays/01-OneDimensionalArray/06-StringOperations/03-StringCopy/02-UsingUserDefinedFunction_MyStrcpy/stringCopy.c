#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    // function prototypes
    void myStrcpy(char[], char[]);

    // variable declarations
    char chArray_original_ra[MAX_STRING_LENGTH], chArray_copy_ra[MAX_STRING_LENGTH]; // A character array is a string

    // code

    // *** STRING INPUT ***
    printf("\n\n");
    printf("Enter a string : \n\n");
    gets_s(chArray_original_ra, MAX_STRING_LENGTH);

    // *** STRING COPY ***
    myStrcpy(chArray_copy_ra, chArray_original_ra);

    // *** STRING OUTPUT ***
    printf("\n\n");
    printf("The original string entered by you (i.e : 'chArray_original[]') is : \n\n");
    printf("%s\n", chArray_original_ra);

    printf("\n\n");
    printf("The copied string (i.e : 'chArray_copy[]' is : \n\n");
    printf("%s\n", chArray_copy_ra);

    return (0);
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