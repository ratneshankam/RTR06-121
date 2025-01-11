#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 5
#define NUM_COLS_ONE 3
#define NUM_COLS_TWO 8

int main(void)
{
    // variable declarations
    int *iArray_ra[NUM_ROWS]; // A 2D array which will have 5 rows and number of columns can be decided later on ...
    int i_ra, j_ra;

    // code
    printf("\n\n");
    printf("********** Memory allocation to 2D integer arrays **********\n");
    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        // Row 0 will have (NUM_COLS - 0) = (NUM_ROWS - 0) = 5 Columns...
        // Row 1 will have (NUM_COLS - 1) = (NUM_ROWS - 1) = 4 Columns...
        // Row 2 will have (NUM_COLS - 2) = (NUM_ROWS - 2) = 3 Columns...
        // Row 3 will have (NUM_COLS - 3) = (NUM_ROWS - 3) = 2 Columns...
        // Row 4 will have (NUM_COLS - 4) = (NUM_ROWS - 4) = 1 Columns...

        // Because of this, ther is no contiguous memory allocation ... hence, although we may use the data as a 2D array, it is not really a 2D array in memory ...
        
        iArray_ra[i_ra] = (int *)malloc(NUM_COLS_ONE * sizeof(int));
        if (iArray_ra[i_ra] == NULL)
        {
            printf("Failed to allocate memory to row %d of 2D integer array !!! Exitting now ...\n", i_ra);
            exit(0);
        }
        else
        {
            printf("Memory allocation to row %d of 2D integer array succeeded !!!\n", i_ra);
        }
    }

    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        for (j_ra = 0; j_ra < NUM_COLS_ONE; j_ra++)
        {
            iArray_ra[i_ra][j_ra] = (i_ra + 1) * (j_ra + 1);
        }
    }

    printf("\n\n");
    printf("Displaying 2D Array : \n\n");
    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        for (j_ra = 0; j_ra < NUM_COLS_ONE; j_ra++)
        {
            printf("iArray_ra[%d][%d] = %d \t at address : %p\n", i_ra, j_ra, iArray_ra[i_ra][j_ra], &iArray_ra[i_ra][j_ra]);
        }
        printf("\n");
    }

    for (i_ra = (NUM_ROWS - 1); i_ra >= 0; i_ra--)
    {
        if (iArray_ra[i_ra])
        {
            free(iArray_ra[i_ra]);
            iArray_ra[i_ra] = NULL;
            printf("Memory allocated to row %d of 2D integer array has been successfully freed !!!\n\n", i_ra);
        }
    }

    return (0);
}