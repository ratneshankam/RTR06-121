#include <stdio.h>

#define NUM_ROWS 5
#define NUM_COLS 3

int main(void)
{
    // variable declarations
    int iArray_2D_ra[NUM_ROWS][NUM_COLS]; // Total number of elements = NUM_ROWS * NUM_COLS
    int iArray_1D_ra[NUM_ROWS * NUM_COLS];

    int i_ra, j_ra;
    int num_ra;

    // code
    printf("Enter elements of your choice to fill up the integer 2D array : \n\n");

    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        printf("For row number %d : \n", (i_ra + 1));
        for (j_ra = 0; j_ra < NUM_COLS; j_ra++)
        {
            printf("Enter element number %d : \n", (j_ra + 1));
            scanf("%d", &num_ra);
            iArray_2D_ra[i_ra][j_ra] = num_ra;
        }
        printf("\n\n");
    }

    // *** Display of 2D array ***
    printf("\n\n");
    printf("2D array of integers : \n\n");
    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        printf("******* Row %d *******\n", (i_ra + 1));
        for (j_ra = 0; j_ra < NUM_COLS; j_ra++)
        {
            printf("iArray_2D_ra[%d][%d] = %d\n", i_ra, j_ra, iArray_2D_ra[i_ra][j_ra]);
        }
        printf("\n\n");
    }

    // *** Converting 2D integer array to 1D integer array ***
    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        for (j_ra = 0; j_ra < NUM_COLS; j_ra++)
        {
            iArray_1D_ra[(i_ra * NUM_COLS) + j_ra] = iArray_2D_ra[i_ra][j_ra];
        }
    }

    // *** Printing 1D Array ***
    printf("\n\n");
    printf("1D array of integers : \n\n");
    for (i_ra = 0; i_ra < (NUM_ROWS * NUM_COLS); i_ra++)
    {
        printf("iArray_1D_ra[%d] = %d\n", i_ra, iArray_1D_ra[i_ra]);
    }

    printf("\n\n");

    return (0);
}
