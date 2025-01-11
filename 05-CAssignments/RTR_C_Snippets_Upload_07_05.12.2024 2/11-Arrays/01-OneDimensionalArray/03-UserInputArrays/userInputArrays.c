#include <stdio.h>

// MACRO CONSTANT USED AS ARRAY SIZE IN SUBSCRIPT AND AS ARRAY LENGTH.
// HENCE, THIS PROGRAM'S ARRAYS' SIZES CAN BE SIMPLY CHANGED BY CHANGING THESE FOLLOWING 3 GLOBAL MACRO CONSTANT VALUES, BEFORE COMPILING, LINKING AND EXECUTING THE PROGRAM !!!

#define INI_ARRAY_NUM_ELEMENTS 5
#define FLOAT_ARRAY_NUM_ELEMENTS 3
#define CHAR_ARRAY_NUM_ELEMENTS 15

int main(void)
{
    // variable declarations
    int iArray_ra[INI_ARRAY_NUM_ELEMENTS];
    float fArray_ra[FLOAT_ARRAY_NUM_ELEMENTS];
    char cArray_ra[CHAR_ARRAY_NUM_ELEMENTS];
    int i_ra, num_ra;

    // code

    // ****** ARRAY ELEMENTS INPUT ******

    printf("\n\n");
    printf("Enter elements for 'Integer' array : \n");
    for (i_ra = 0; i_ra < INI_ARRAY_NUM_ELEMENTS; i_ra++)
    {
        scanf("%d", &iArray_ra[i_ra]);
    }

    printf("\n\n");
    printf("Enter elements for 'Floating-Point' array : \n");
    for (i_ra = 0; i_ra < FLOAT_ARRAY_NUM_ELEMENTS; i_ra++)
    {
        scanf("%f", &fArray_ra[i_ra]);
    }

    printf("\n\n");
    printf("Enter elements for 'Character' array : \n");
    for (i_ra = 0; i_ra < CHAR_ARRAY_NUM_ELEMENTS; i_ra++)
    {
        scanf(" %c", &cArray_ra[i_ra]);
    }

    // ****** ARRAY ELEMENTS OUTPUT ******

    printf("\n\n");
    printf("Integer array entered by you : \n");
    for (i_ra = 0; i_ra < INI_ARRAY_NUM_ELEMENTS; i_ra++)
    {
        printf("%d ", iArray_ra[i_ra]);
    }

    printf("\n\n");
    printf("Floating-Point array entered by you : \n");
    for (i_ra = 0; i_ra < FLOAT_ARRAY_NUM_ELEMENTS; i_ra++)
    {
        printf("%f ", fArray_ra[i_ra]);
    }

    printf("\n\n");
    printf("Character array entered by you : \n");
    for (i_ra = 0; i_ra < CHAR_ARRAY_NUM_ELEMENTS; i_ra++)
    {
        printf("%c ", cArray_ra[i_ra]);
    }

    return (0);
}