#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    // function prototypes
    int myStrlen(char[]);

    // variable declarations
    char chArray[MAX_STRING_LENGTH]; // a character array is a string
    int iStringLength_ra = 0;
    int count_A_ra = 0, count_E_ra = 0, count_I_ra = 0, count_O_ra = 0, count_U_ra = 0; // Initial counts = 0
    int i_ra = 0;

    // code

    // *** STRING INTPUT ***
    printf("\n\n");
    printf("Enter a string: \n\n");
    get_s(chArray, MAX_STRING_LENGTH);

    // *** STRING OUTPUT ***
    printf("\n\n");
    printf("string entered by you is : \n\n");
    printf("%s\n", chArray);

    iStringLength_ra = myStrlen(chArray);

    for (i_ra = 0; i_ra < iStringLength_ra; i_ra++)
    {
        switch (chArray[i_ra])
        {
        case 'A':
        case 'a':
            count_A_ra++;
            break;
        case 'E':
        case 'e':
            count_E_ra++;
            break;
        case 'I':
        case 'i':
            count_I_ra++;
            break;
        case 'O':
        case 'o':
            count_O_ra++;
            break;
        case 'U':
        case 'u':
            count_U_ra++;
            break;
        default:
            break;
        }
    }

    printf("\n\n");
    printf("In the string entered by you, the vowels and the number of their occurrences are are follows : \n\n");
    printf("'A' has occurred = %d times !!!\n\n", count_A_ra);
    printf("'E' has occurred = %d times !!!\n\n", count_E_ra);
    printf("'I' has occurred = %d times !!!\n\n", count_I_ra);
    printf("'O' has occurred = %d times !!!\n\n", count_O_ra);
    printf("'U' has occurred = %d times !!!\n\n", count_U_ra);

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