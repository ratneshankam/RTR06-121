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

    // **** Piece-Meal Display ****

    // ******* Row 1 *******

    printf("******* Row 1 *******\n");
    printf("******* Column 1 *******\n");
    printf("iArray_ra[0][0][0] = %d\n", iArray_ra[0][0][0]);
    printf("iArray_ra[0][0][1] = %d\n", iArray_ra[0][0][1]);
    printf("******* Column 2 *******\n");
    printf("iArray_ra[0][1][0] = %d\n", iArray_ra[0][1][0]);
    printf("iArray_ra[0][1][1] = %d\n", iArray_ra[0][1][1]);
    printf("******* Column 3 *******\n");
    printf("iArray_ra[0][2][0] = %d\n", iArray_ra[0][2][0]);
    printf("iArray_ra[0][2][1] = %d\n", iArray_ra[0][2][1]);
    printf("\n\n");

    // ******* Row 2 *******
    printf("******* Row 2 *******\n");
    printf("******* Column 1 *******\n");
    printf("iArray_ra[1][0][0] = %d\n", iArray_ra[1][0][0]);
    printf("iArray_ra[1][0][1] = %d\n", iArray_ra[1][0][1]);
    printf("******* Column 2 *******\n");
    printf("iArray_ra[1][1][0] = %d\n", iArray_ra[1][1][0]);
    printf("iArray_ra[1][1][1] = %d\n", iArray_ra[1][1][1]);
    printf("******* Column 3 *******\n");
    printf("iArray_ra[1][2][0] = %d\n", iArray_ra[1][2][0]);
    printf("iArray_ra[1][2][1] = %d\n", iArray_ra[1][2][1]);
    printf("\n\n");

    // ******* Row 3 *******
    printf("******* Row 3 *******\n");
    printf("******* Column 1 *******\n");
    printf("iArray_ra[2][0][0] = %d\n", iArray_ra[2][0][0]);
    printf("iArray_ra[2][0][1] = %d\n", iArray_ra[2][0][1]);
    printf("******* Column 2 *******\n");
    printf("iArray_ra[2][1][0] = %d\n", iArray_ra[2][1][0]);
    printf("iArray_ra[2][1][1] = %d\n", iArray_ra[2][1][1]);
    printf("******* Column 3 *******\n");
    printf("iArray_ra[2][2][0] = %d\n", iArray_ra[2][2][0]);
    printf("iArray_ra[2][2][1] = %d\n", iArray_ra[2][2][1]);
    printf("\n\n");

    // ******* Row 4 *******
    printf("******* Row 4 *******\n");
    printf("******* Column 1 *******\n");
    printf("iArray_ra[3][0][0] = %d\n", iArray_ra[3][0][0]);
    printf("iArray_ra[3][0][1] = %d\n", iArray_ra[3][0][1]);
    printf("******* Column 2 *******\n");
    printf("iArray_ra[3][1][0] = %d\n", iArray_ra[3][1][0]);
    printf("iArray_ra[3][1][1] = %d\n", iArray_ra[3][1][1]);
    printf("******* Column 3 *******\n");
    printf("iArray_ra[3][2][0] = %d\n", iArray_ra[3][2][0]);
    printf("iArray_ra[3][2][1] = %d\n", iArray_ra[3][2][1]);
    printf("\n\n");
    
    // ******* Row 5 *******
    printf("******* Row 5 *******\n");
    printf("******* Column 1 *******\n");
    printf("iArray_ra[4][0][0] = %d\n", iArray_ra[4][0][0]);
    printf("iArray_ra[4][0][1] = %d\n", iArray_ra[4][0][1]);
    printf("******* Column 2 *******\n");
    printf("iArray_ra[4][1][0] = %d\n", iArray_ra[4][1][0]);
    printf("iArray_ra[4][1][1] = %d\n", iArray_ra[4][1][1]);
    printf("******* Column 3 *******\n");
    printf("iArray_ra[4][2][0] = %d\n", iArray_ra[4][2][0]);
    printf("iArray_ra[4][2][1] = %d\n", iArray_ra[4][2][1]);
    printf("\n\n");

    return (0);
}