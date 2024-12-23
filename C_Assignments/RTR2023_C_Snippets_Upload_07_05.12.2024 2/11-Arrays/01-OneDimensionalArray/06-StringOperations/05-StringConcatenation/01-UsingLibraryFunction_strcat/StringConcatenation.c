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
    get_s(chArray_one, MAX_STRING_LENGTH);
    printf("\n\n");
    printf("Enter second string: \n\n");
    get_s(chArray_two, MAX_STRING_LENGTH);

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

void myStrrev(char str_destination_ra[], char str_source_ra[])
{
    // function prototype
    int myStrlen(char[]);

    // variable declaration
    int iStringLength_ra = 0;
    int i_ra, j_ra, len_ra;

    // code
    // Array indices begin from 0, hence last index will always be(length - 1)
    len_ra = iStringLength_ra - 1;

    // we need to put the character which is at last index of 'str_sourc' to the first index
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