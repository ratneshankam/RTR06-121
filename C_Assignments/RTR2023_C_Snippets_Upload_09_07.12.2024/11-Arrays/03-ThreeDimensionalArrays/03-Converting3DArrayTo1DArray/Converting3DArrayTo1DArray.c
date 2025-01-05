#include <stdio.h>

#define NUM_ROWS 5
#define NUM_COLS 3
#define DEPTH 2
int main(void)
{

    // variable declarations

    // In-Line Initialization
    int iArray_ra[NUM_ROWS][NUM_COLS][DEPTH] = {
        {{9, 18}, {27, 36}, {45, 54}},
        {{8, 16}, {24, 32}, {40, 48}},
        {{7, 14}, {21, 28}, {35, 42}},
        {{6, 12}, {18, 24}, {30, 36}},
        {{5, 10}, {15, 20}, {25, 30}},
    };
    int i_ra, j_ra, k_ra;

    int iArray_1D_ra[NUM_ROWS * NUM_COLS * DEPTH]; // 5 * 3 * 2 elements => 30 elements in 1D array

    // code

    // ******** Display 3D Array *********
    printf("\n\n");
    printf("Elements in the 3D array : \n\n");

    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        printf("********* Row %d *********", (i_ra + 1));
        for (j_ra = 0; j_ra < NUM_COLS; j_ra++)
        {
            printf("********* Column %d *********", (j_ra + 1));
            for (k_ra = 0; k_ra < DEPTH; k_ra++)
            {
                printf("iArray[%d][%d][%d] = %d\n", i_ra, j_ra, k_ra, iArray_ra[i_ra][j_ra][k_ra]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // ********* Converting 3D To 1D *********
    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        for (j_ra = 0; j_ra < NUM_COLS; j_ra++)
        {
            for (k_ra = 0; k_ra < DEPTH; k_ra++)
            {
                iArray_1D_ra[(i_ra * NUM_COLS * DEPTH) + (j_ra * DEPTH) + k_ra] = iArray_ra[i_ra][j_ra][k_ra];
            }
        }
    }

    // ********** Display 1D array ***********
    printf("\n\n");
    printf("Elements in the 1D array : \n\n");
    for (i_ra = 0; i_ra < (NUM_ROWS * NUM_COLS * DEPTH); i_ra++)
    {
        printf("iArray_1D_ra[%d] = %d\n", i_ra, iArray_1D_ra[i_ra]);
    }

    return (0);
}