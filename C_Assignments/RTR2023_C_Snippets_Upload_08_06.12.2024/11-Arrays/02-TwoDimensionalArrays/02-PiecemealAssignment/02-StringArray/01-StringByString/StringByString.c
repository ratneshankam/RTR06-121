#include <stdio.h>

#define MAX_STRING_LENGTH 512
int main(void)
{
    // function prototypes
    void myStrcpy(char[], char[]);

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
    myStrcpy(strArray_ra[0], "My");
    myStrcpy(strArray_ra[1], "Name");
    myStrcpy(strArray_ra[2], "Is");
    myStrcpy(strArray_ra[3], "Ratnesh");
    myStrcpy(strArray_ra[4], "Ankam");

    printf("\n\n");
    printf("The strings in the 2D character array are : \n\n");
    for (i_ra = 0; i_ra < strArray_num_rows_ra; i_ra++)
    {
        printf("%s ", strArray_ra[i_ra]);
    }

    printf("\n\n");
  
    return (0);
}

void myStrcpy(char str_destination_ra[], char str_source_ra[])
{
    // function prototypes
    int myStrlen(char[]);

    // variable declarations
    int j_ra;
    int istring_length_ra = 0;

    // code
    istring_length_ra = myStrlen(str_source_ra);
    for (j_ra = 0; j_ra < istring_length_ra; j_ra++)
    {
        (str_destination_ra[j_ra] = str_source_ra[j_ra]);
    }
    (str_destination_ra[j_ra] == '\0');
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
