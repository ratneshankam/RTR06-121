#include <stdio.h>

#define INT_ARRAY_SIZE 10
#define FLOAT_ARRAY_SIZE 5
#define CHAR_ARRAY_SIZE 26

#define NUM_STRINGS 10
#define MAX_CHARACTERS_PER_STRING 20

#define ALPHABET_BEGINNING 65 // 'A'

struct MyDataOne
{
    int iArray_ra[INT_ARRAY_SIZE];
    float fArray_ra[FLOAT_ARRAY_SIZE];
};

struct MyDataTwo
{
    char cArray_ra[CHAR_ARRAY_SIZE];
    char strArray_ra[NUM_STRINGS][MAX_CHARACTERS_PER_STRING];
};

int main(void)
{
    // variable declarations
    struct MyDataOne data_one_ra;
    struct MyDataTwo data_two_ra;
    int i_ra;

    // code
    // ***** Piece-Meal Assignment (Hard-Coded) *****
    data_one_ra.fArray_ra[0] = 0.1f;
    data_one_ra.fArray_ra[1] = 1.2f;
    data_one_ra.fArray_ra[2] = 2.3f;
    data_one_ra.fArray_ra[3] = 3.4f;
    data_one_ra.fArray_ra[4] = 4.5f;

    // ***** Loop Assignment (User Input) *****
    printf("\n\n");
    printf("Enter %d integers : \n\n", INT_ARRAY_SIZE);
    for (i_ra = 0; i_ra < INT_ARRAY_SIZE; i_ra++)
    {
        scanf("%d", &data_one_ra.iArray_ra[i_ra]);
    }

    // ***** Loop Assignment (Hard-Coded) *****
    for (i_ra = 0; i_ra < CHAR_ARRAY_SIZE; i_ra++)
    {
        data_two_ra.cArray_ra[i_ra] = (char)(i_ra + ALPHABET_BEGINNING);
    }

    // ***** Piece-Meal Assignment (Hard-Coded) *****
    strcpy(data_two_ra.strArray_ra[0], "Welcome !!!");
    strcpy(data_two_ra.strArray_ra[1], "This");
    strcpy(data_two_ra.strArray_ra[2], "Is");
    strcpy(data_two_ra.strArray_ra[3], "ASTROMEDICOMP");
    strcpy(data_two_ra.strArray_ra[4], "Real");
    strcpy(data_two_ra.strArray_ra[5], "Time");
    strcpy(data_two_ra.strArray_ra[6], "Rendering");
    strcpy(data_two_ra.strArray_ra[7], "Batch");
    strcpy(data_two_ra.strArray_ra[8], "Of");
    strcpy(data_two_ra.strArray_ra[9], "2024-25 !!!");

    // *** Displaying data members of 'struct MyDataOne' and their values ***
    printf("\n\n");
    printf("Members of 'struct MyDataOne' alongwith their assigned values are : \n\n");

    printf("\n\n");
    printf("Integer array (data_one_ra.fArray_ra[]) : \n\n");
    for (i_ra = 0; i_ra < INT_ARRAY_SIZE; i_ra++)
    {
        printf("data_one_ra.fArray_ra[%d] = %f\n", i_ra, data_one_ra.fArray_ra[i_ra]);
    }

    // *** Displaying data members of 'struct MyDataTwo' and their values ***
    printf("\n\n");
    printf("Members of 'struct MyDataTwo' alongwith their assigned values are : \n\n");

    printf("\n\n");
    printf("Character array (data_two_ra.cArray_ra[]) : \n\n");
    for (i_ra = 0; i_ra < CHAR_ARRAY_SIZE; i_ra++)
    {
        printf("data_two_ra.cArray_ra[%d] = %c\n", i_ra, data_two_ra.cArray_ra[i_ra]);
    }

    printf("\n\n");
    printf("String array (data_two_ra.strArray_ra[]) : \n\n");
    for (i_ra = 0; i_ra < NUM_STRINGS; i_ra++)
    {
        printf("%s ", data_two_ra.strArray_ra[i_ra]);
    }

    printf("\n\n");

    return (0);
}