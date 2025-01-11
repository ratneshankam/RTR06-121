#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 5
#define NUM_COLS 3

int main(void)
{
    // variable declarations
    int iArray_ra[NUM_ROWS][NUM_COLS];
    int i_ra, j_ra;

    // code
    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        for (j_ra = 0; j_ra < NUM_COLS; j_ra++)
        {
            iArray_ra[i_ra][j_ra] = (i_ra + 1) * (j_ra + 1);
        }
    }

    printf("\n\n");
    printf("2D integer array elements along with addresses : \n\n");
    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        for (j_ra = 0; j_ra < NUM_COLS; j_ra++)
        {
            printf("iArray_ra[%d][%d] = %d \t \t at Address : %p\n", i_ra, j_ra, iArray_ra[i_ra][j_ra], &iArray_ra[i_ra][j_ra]);
        }
    }

    return (0);
}