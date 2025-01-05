#include <stdio.h>
#include <string.h> // for strrev()

#define MAX_STRING_LENGTH 512

int main(void)
{
    // variable declarations
    char chArray_original_ra[MAX_STRING_LENGTH]; // A character array is a string

    // code

    // *** STRING INPUT ***
    printf("\n\n");
    printf("Enter a string : \n\n");
    gets_s(chArray_original_ra, MAX_STRING_LENGTH);

    // *** STRING OUTPUT ***
    printf("\n\n");
    printf("The original string entered by you (i.e : 'chArray_original[]') is : \n\n");
    printf("%s\n", chArray_original_ra);

    printf("\n\n");
    printf("The reversed string (i.e : 'chArray_reverse[]') is : \n\n");
    printf("%s\n", strrev(chArray_original_ra));

    return (0);
}