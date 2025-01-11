#include <stdio.h>
#include <string.h> // for strrev()

#define MAX_STRING_LENGTH 512

int main(void)
{
    // variable declarations
    char chArray_one[MAX_STRING_LENGTH], chArray_two[MAX_STRING_LENGTH]; // A character array is a string

    // code

    // *** STRING INTPUT ***
    printf("\n\n");
    printf("Enter first string: \n\n");
    gets_s(chArray_one, MAX_STRING_LENGTH);
    printf("\n\n");
    printf("Enter second string: \n\n");
    gets_s(chArray_two, MAX_STRING_LENGTH);

    // *** STRING CONCAT ***
    printf("\n\n");
    printf("****** BEFORE CONCATENATION *******");
    printf("\n\n");
    printf("The original first string entered by you (i.e : 'chArray_one[]') is : \n\n");
    printf("%s\n", chArray_one);

    printf("\n\n");
    printf("The original second string entered by you (i.e : 'chArray_two[]') is : \n\n");
    printf("%s\n", chArray_two);

    strcat(chArray_one, chArray_two);

    printf("\n\n");
    printf("****** AFTER CONCATENATION  *******");
    printf("\n\n");
    printf("'chArray_one[]' is : \n\n");
    printf("%s\n", chArray_one);

    printf("\n\n");
    printf("'chArray_two[]' is : \n\n");
    printf("%s\n", chArray_two);

    return (0);
}
