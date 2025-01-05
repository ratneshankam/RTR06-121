#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    // variable declarations
    char chArray_ra[MAX_STRING_LENGTH]; // A character array is a string

    // code
    printf("\n\n");
    printf("Enter a string : \n\n");
    gets_s(chArray_ra, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("String entered by you is : \n\n");
    printf("%s\n", chArray_ra);

    return (0);
}
