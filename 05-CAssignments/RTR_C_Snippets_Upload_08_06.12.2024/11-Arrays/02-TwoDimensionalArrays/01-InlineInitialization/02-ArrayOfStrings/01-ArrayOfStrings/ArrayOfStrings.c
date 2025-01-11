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
    int char_size_ra = 0, strArray_size_ra = 0, strArray_num_elements_ra = 0, strArray_num_rows_ra = 0, strArray_num_columns_ra = 0, strActual_num_chars_ra = 0, i_ra = 0;

    // code
    printf("\n\n");

    char_size_ra = sizeof(char);
    strArray_size_ra = sizeof(strArray_ra);

    printf("Size of two dimensional character array is = %d\n", strArray_size_ra);

    strArray_num_rows_ra = strArray_size_ra / sizeof(strArray_ra[0]);
    printf("Number of rows(strings) in 2D character array is = %d\n", strArray_num_rows_ra);

    strArray_num_columns_ra = sizeof(strArray_ra[0]) / char_size_ra;
    printf("Number of columns in 2D character array (string array) is = %d\n", strArray_num_columns_ra);

    strArray_num_elements_ra = strArray_num_rows_ra * strArray_num_columns_ra;
    printf("Maximum number of elements (characters) in 2D character array (string array) is = %d\n", strArray_num_elements_ra);

    for (i_ra = 0; i_ra < strArray_num_rows_ra; i_ra++) {
        strActual_num_chars_ra = strActual_num_chars_ra + myStrlen(strArray_ra[i_ra]);
    }
    printf("Actual number of elements (characters) in 2D character array (string array) is = %d\n", strActual_num_chars_ra);

    printf("\n\n");
    printf("Strings in the 2D array : \n\n");

    // since, char[][] is an array of strings, referencing only by the row number (first []) will give the row or the string
    // The column number (second []) is the particular character in that string / row

    printf("%s ", strArray_ra[0]);
    printf("%s ", strArray_ra[1]);
    printf("%s ", strArray_ra[2]);
    printf("%s ", strArray_ra[3]);
    printf("%s ", strArray_ra[4]);
    printf("%s ", strArray_ra[5]);
    printf("%s ", strArray_ra[6]);
    printf("%s ", strArray_ra[7]);
    printf("%s ", strArray_ra[8]);
    printf("%s\n\n", strArray_ra[9]);
    
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
