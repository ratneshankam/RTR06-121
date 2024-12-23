#include <stdio.h>

#define MAX_STRING_LENGTH 512
int main(void)
{
    // function prototypes
    int myStrlen(char[]);

    // variable declarations

    // *** A 'string' is an array of characters ... so char[] is a char array and hence, char[] is a 'string' ***
    // *** An array of char arrays is an array of strings !!! ***
    // *** Hence, char[] is one char array and hence, is one string ***
    // *** Hence, char[][] is an array of char arrays and hence, is an array of strings ***

    // Here, the string array can allow a maximum number of 10 strings (10 rows) and each of these 10 strings can have only upto 15 characters maximum (15 columns)

    char strArray_ra[10][15] = {"Hello!", "Welcome", "To", "Real", "Time", "Rendering", "Batch", "(2024-25)", "Of", "ASTROMEDICOMP."}; // In-Line Initialization

    int iStrLengths_ra[10]; // 1D integer array - stores lengths of those strings at corresponding indices in 'strArray_ra[]' e.g: iStrLengths[0] will be the length of string at strArray[0], iStrLengths[1] will be the length of string at strArray[1] ... 10 strings, 10 lenghts ...

    int strArray_size_ra = 0, strArray_num_rows_ra = 0, i_ra = 0, j_ra = 0;

    // code
    strArray_size_ra = sizeof(strArray_ra);
    strArray_num_rows_ra = strArray_size_ra / sizeof(strArray_ra[0]);

    // Storing in lengths of all the strings ...
    for (i_ra = 0; i_ra < strArray_num_rows_ra; i_ra++)
    {
        iStrLengths_ra[i_ra] = myStrlen(strArray_ra[i_ra]);
    }

    printf("\n\n");

    printf("The entire string array : \n\n");

    for (i_ra = 0; i_ra < strArray_num_rows_ra; i_ra++)
    {
        printf("%s ", strArray_ra[i_ra]);
    }

    printf("\n\n");
    printf("Strings in the 2D array : \n\n");

    // since, char[][] is an array of strings, referencing only by the row number (first []) will give the row or the string
    // The column number (second []) is the particular character in that string / row

    for (i_ra = 0; i_ra < strArray_num_rows_ra; i_ra++)
    {
        printf("String number %d => %s\n\n", (i_ra + 1), strArray_ra[i_ra]);
        for (j_ra = 0; j_ra < iStrLengths_ra[i_ra]; j_ra++)
        {
            printf("Character %d = %c\n", (j_ra + 1), strArray_ra[i_ra][j_ra]);
        }
        printf("\n\n");
    }

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
