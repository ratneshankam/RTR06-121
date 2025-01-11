#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 5
#define NUM_COLS 3

int main(void)
{
    // variable declarations
    int iArray_ra[NUM_ROWS][NUM_COLS];
    int i_ra, j_ra;

    int *ptr_iArray_row_ra = NULL;

    // code
    // *** Every row of a 2D array is an integer array itself comprising of 'NUM_COLS' integer elements ***
    // *** There are 5 rows and 3 columns in a 2D integer array. each of the 5 rows is a 1D array of 3 integers ***
    // *** Hence, each of these 5 rows themselves being array, will be the base addresses of their respective rows ***

    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        ptr_iArray_row_ra = iArray_ra[i_ra]; // 'iArray_ra[i_ra]' is the base address of ith row ...
        for (j_ra = 0; j_ra < NUM_COLS; j_ra++)
        {
            *(ptr_iArray_row_ra + j_ra) = (i_ra + 1) * (j_ra + 1); // 'ptr_iArray_row_ra' (That is, 'iArray_ra[i_ra]') can be treated as 1D array using pointers ...
        }
    }

    printf("\n\n");
    printf("2D integer array elements along with addresses : \n\n");
    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        ptr_iArray_row_ra = iArray_ra[i_ra];
        for (j_ra = 0; j_ra < NUM_COLS; j_ra++)
        {
            printf("*(ptr_iArray_row_ra + %d) = %d \t \t at Address (ptr_iArray_row_ra + j_ra) : %p\n", j_ra, *(ptr_iArray_row_ra + j_ra), (ptr_iArray_row_ra + j_ra));
        }
        printf("\n\n");
    }

    return (0);
}