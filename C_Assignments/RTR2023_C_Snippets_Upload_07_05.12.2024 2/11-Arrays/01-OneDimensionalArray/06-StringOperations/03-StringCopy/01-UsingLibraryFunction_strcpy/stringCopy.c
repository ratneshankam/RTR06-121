#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    // variable declarations
    char chArray_original_ra[MAX_STRING_LENGTH], chArray_copy_ra[MAX_STRING_LENGTH]; // A character array is a string

    // code

    // *** STRING INPUT ***
    printf("\n\n");
    printf("Enter a string : \n\n");
    gets_s(chArray_original_ra, MAX_STRING_LENGTH);

    // *** STRING COPY ***
    strcpy(chArray_copy_ra, chArray_original_ra);

    // *** STRING OUTPUT ***
    printf("\n\n");
    printf("The original string entered by you (i.e : 'chArray_original[]') is : \n\n");
    printf("%s\n", chArray_original_ra);

    printf("\n\n");
    printf("The copied string (i.e : 'chArray_copy[]') is : \n\n");
    printf("%s\n", chArray_copy_ra);

    return (0);
}
