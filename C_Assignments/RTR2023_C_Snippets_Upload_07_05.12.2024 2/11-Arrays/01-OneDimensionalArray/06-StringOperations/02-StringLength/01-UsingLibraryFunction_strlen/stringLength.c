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
    get_s(chArray_ra, MAX_STRING_LENGTH);

    // *** STRING OUTPUT ***
    printf("\n\n");
    printf("String entered by you is : \n\n");
    printf("%s\n", chArray_ra);

    // *** STRING LENGTH ***
    printf("\n\n");
    iStringLength_ra = strlen(chArray_ra);
    printf("Length of the string is = %d characters !!!\n", iStringLength_ra);

    return (0);
}
