#include <stdio.h>

#define MAX_STRING_LENGTH 512
int main(void)
{
    // variable declarations

    // *** A 'string' is an array of characters ... so char[] is a char array and hence, char[] is a 'string' ***
    // *** An array of char arrays is an array of strings !!! ***
    // *** Hence, char[] is one char array and hence, is one string ***
    // *** Hence, char[][] is an array of char arrays and hence, is an array of strings ***

    // Here, the string array can allow a maximum number of 5 strings (5 rows) and each of these 5 strings can have only upto 10 characters maximum (10 columns)

    char strArray_ra[5][10]; // 5 rows (0,1,2,3,4) -> 5 strings (each string can have a maximum of 10 characters)
    int char_size_ra = 0;
    int strArray_size_ra = 0;
    int strArray_num_elements_ra = 0, strArray_num_rows_ra = 0, strArray_num_columns_ra = 0;
    int i_ra = 0;

    // code
    printf("\n\n");

    char_size_ra = sizeof(char);
    strArray_size_ra = sizeof(strArray_ra);

    printf("Size of two dimensional character array (string array) is = %d\n", strArray_size_ra);

    strArray_num_rows_ra = strArray_size_ra / sizeof(strArray_ra[0]);
    printf("Number of rows(strings) in 2D character array is = %d\n", strArray_num_rows_ra);

    strArray_num_columns_ra = sizeof(strArray_ra[0]) / char_size_ra;
    printf("Number of columns in 2D character array (string array) is = %d\n", strArray_num_columns_ra);

    strArray_num_elements_ra = strArray_num_rows_ra * strArray_num_columns_ra;
    printf("Maximum number of elements (characters) in 2D character array (string array) is = %d\n", strArray_num_elements_ra);

    // *** Piece-Meal Assignement ***

    // ******** Row 1 / String 1 *********
    strArray_ra[0][0] = 'M';
    strArray_ra[0][1] = 'y';
    strArray_ra[0][2] = '\0'; // null - terminating character

    // ******** Row 2 / String 2 *********
    strArray_ra[1][0] = 'N';
    strArray_ra[1][1] = 'a';
    strArray_ra[1][2] = 'm';
    strArray_ra[1][3] = 'e';
    strArray_ra[1][4] = '\0'; // null - terminating character

    // ******** Row 3 / String 3 *********
    strArray_ra[2][0] = 'I';
    strArray_ra[2][1] = 's';
    strArray_ra[2][2] = '\0'; // null - terminating character

    // ******** Row 4 / String 4 *********
    strArray_ra[3][0] = 'R';
    strArray_ra[3][1] = 'a';
    strArray_ra[3][2] = 't';
    strArray_ra[3][3] = 'n';
    strArray_ra[3][4] = 'e';
    strArray_ra[3][5] = 's';
    strArray_ra[3][6] = 'h';
    strArray_ra[3][7] = '\0'; // null - terminating character

    // ******** Row 5 / String 5 *********
    strArray_ra[4][0] = 'A';
    strArray_ra[4][1] = 'n';
    strArray_ra[4][2] = 'k';
    strArray_ra[4][3] = 'a';
    strArray_ra[4][4] = 'm';
    strArray_ra[4][5] = '\0'; // null - terminating character

    printf("\n\n");
    printf("The strings in the 2D character array are : \n\n");
    
    for (i_ra = 0; i_ra < strArray_num_rows_ra; i_ra++)
    {
        printf("%s ", strArray_ra[i_ra]);
    }

    printf("\n\n");

    return (0);
}