#include <stdio.h>
#include <string.h> // for strrev()

#define MAX_STRING_LENGTH 512

int main(void)
{
    // function prototypes
    void myStrcat(char[], char[]);

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

    myStrcat(chArray_one, chArray_two);

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

void myStrcat(char str_destination_ra[], char str_source_ra[])
{
    // function prototype
    int myStrlen(char[]);

    // variables declarations
    int iStringLength_source_ra = 0, iStringLength_destination_ra = 0;
    int i_ra, j_ra;

    // code
    iStringLength_source_ra = myStrlen(str_source_ra);
    iStringLength_destination_ra = myStrlen(str_destination_ra);

    // array indices begin from 0, hence, last valid index of array will always be (length - 1)
    // so, concatenation must begin from index number equal to length of the array 'str_destination'
    // we need to put the character which is at first index of 'str_source' to the (last index + 1) of 'str_destination'

    for (i_ra = iStringLength_destination_ra, j_ra = 0; j_ra<iStringLength_source_ra; i_ra++, j_ra++) {
        str_destination_ra[i_ra] = str_source_ra[j_ra];
    }

    str_destination_ra[i_ra] = '\0';
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