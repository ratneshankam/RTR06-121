#include <stdio.h>

int main(void)
{

    // variable declarations

    // In-Line Initialization
    int iArray_ra[5][3][2] = {
        {{9, 18}, {27, 36}, {45, 54}},
        {{8, 16}, {24, 32}, {40, 48}},
        {{7, 14}, {21, 28}, {35, 42}},
        {{6, 12}, {18, 24}, {30, 36}},
        {{5, 10}, {15, 20}, {25, 30}},
    };
    int int_size_ra;
    int iArray_size_ra;
    int iArray_num_elements_ra, iArray_width_ra, iArray_height_ra, iArray_depth_ra;
    int i_ra, j_ra, k_ra;

    // code
    printf("\n\n");

    int_size_ra = sizeof(int);

    iArray_size_ra = sizeof(iArray_ra);
    printf("Size of 3D integer array = %d \n\n", iArray_size_ra);

    iArray_width_ra = iArray_size_ra / sizeof(iArray_ra[0]);
    printf("Number of rows (width) in 3D integer array = %d\n\n", iArray_width_ra);

    iArray_height_ra = sizeof(iArray_ra[0]) / sizeof(iArray_ra[0][0]);
    printf("Number of columns (height) in 3D integer array = %d\n\n", iArray_num_elements_ra);

    iArray_depth_ra = sizeof(iArray_ra[0][0]) / int_size_ra;
    printf("Depth in 3D integer array = %d\n\n", iArray_depth_ra);

    iArray_num_elements_ra = iArray_width_ra * iArray_height_ra * iArray_depth_ra;
    printf("Number of elements in 3D integer array = %d\n\n", iArray_num_elements_ra);

    printf("\n\n");
    printf("Elements in integer 3D array : \n\n");

    for (i_ra = 0; i_ra < iArray_width_ra; i_ra++)
    {
        printf("********** Row %d ***********\n", (i_ra + 1));
        for (j_ra = 0; j_ra < iArray_height_ra; j_ra++)
        {
            printf("****** Column %d ******\n", (j_ra + 1));
            for (k_ra = 0; k_ra < iArray_depth_ra; k_ra++)
            {
                printf("iArray_ra[%d][%d][%d] = %d\n", i_ra, j_ra, k_ra, iArray_ra[i_ra][j_ra][k_ra]);
            }
            printf("\n");
        }
        printf("\n\n");
    }

    return (0);
}