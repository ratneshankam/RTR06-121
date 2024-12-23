#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    // variable declarations
    char chArray_original_ra[MAX_STRING_LENGTH], chArray_copy_ra[MAX_STRING_LENGTH]; // A character array is a string

    // code
    printf("\n\n");
    printf("Enter a string : \n\n");
    get_s(chArray_original_ra, MAX_STRING_LENGTH);

    // *** STRING COPY ***
    strcpy(chArray_copy_ra, chArray_original_ra);
    
    // *** STRING OUTPUT ***
    printf("\n\n");
    printf("The original string entered by you (i.e : 'chArray_original[]') is : \n\n");
    printf("%s\n", chArray_original_ra);

    printf("\n\n");
    printf("The copied string (i.e : 'chArray_copy[]' is : \n", chArray_copy_ra);

    return (0);
}

int myStrlen(char str[])
{
    // variable declarations
    int j_ra;
    int string_length_ra = 0;

    // code
    // *** Determining exact length of the string, by detecting the first occurence of null-terminating character (\0) ***
    for (j_ra = 0; j_ra < MAX_STRING_LENGTH; j_ra++)
    {
        if (str[j_ra] == '\0')
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