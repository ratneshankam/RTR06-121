#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 5
#define NUM_COLS 3

int main(void)
{
    // variable declarations
    int *iArray_ra[NUM_ROWS]; // A 2D array which will have 5 rows and number of columns can be decided later on ...
    int i_ra, j_ra;

    // code
    printf("\n\n");

    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        iArray_ra[i_ra] = (int *)malloc(NUM_COLS * sizeof(int));
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

    // *** Assigning Values To 2D Array ***
    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        for (j_ra = 0; j_ra < NUM_COLS; j_ra++)
        {
            iArray_ra[i_ra][j_ra] = (i_ra + 1) * (j_ra + 1);
        }
    }

    // *** Displaying 2D Array ***
    prinf("\n\n");
    printf("Displaying 2D Array : \n\n");
    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        for (j_ra = 0; j_ra < NUM_COLS; j_ra++)
        {
            printf("iArray_ra[%d][%d] = %d\n", i_ra, j_ra, iArray_ra[i_ra]);
        }
        printf("\n\n");
    }
    printf("\n\n");

    // *** Freeing Memory Assigned To 2D Array (must be done in reverse order)
    for (i_ra = (NUM_ROWS - 1); i_ra >= 0; i_ra--)
    {
        free(iArray_ra[i_ra]);
        iArray_ra[i_ra] = NULL;
        printf("Memory allocated to row %d of 2D integer array has been successfully freed !!!\n\n", i_ra);
    }

    return (0);
}