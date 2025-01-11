#include <stdio.h>

int main(void)
{
    // variable declaration
    int iArray_one_ra[5];
    int iArray_two_ra[5][3];
    int iArray_three_ra[100][100][5];

    int num_rows_2D_ra = 0, num_cols_2D_ra = 0;

    int num_rows_3D_ra = 0, num_cols_3D_ra = 0, num_depth_3D_ra = 0;

    // code
    printf("\n\n");
    printf("Size of 1D integer array iArray_one_ra = %zu\n", sizeof(iArray_one_ra));
    printf("Number of elements in 1D integer array iArray_one_ra = %llu\n", (sizeof(iArray_one_ra) / sizeof(int)));

    //

    printf("\n\n");
    printf("Size of 2D integer array iArray_two_ra = %zu\n", sizeof(iArray_two_ra));

    printf("Number rows in 2D integer array iArray_two_ra = %llu\n", (sizeof(iArray_two_ra) / sizeof(iArray_two_ra[0])));
    num_rows_2D_ra = (sizeof(iArray_two_ra) / sizeof(iArray_two_ra[0]));

    printf("Number of elements (columns) in each row in 2D integer array iArray_two_ra = %llu\n", (sizeof(iArray_two_ra[0]) / sizeof(iArray_two_ra[0][0])));
    num_cols_2D_ra = (sizeof(iArray_two_ra[0]) / sizeof(iArray_two_ra[0][0]));

    printf("Number of elements in total in 2D array iArray_two_ra = %d\n", (num_rows_2D_ra * num_cols_2D_ra));

    //

    printf("\n\n");
    printf("Size of 3D integer array iArray_three_ra = %zu\n", sizeof(iArray_three_ra));

    printf("Number rows in 3D integer array iArray_three_ra = %llu\n", (sizeof(iArray_three_ra) / sizeof(iArray_three_ra[0])));
    num_rows_3D_ra = (sizeof(iArray_three_ra) / sizeof(iArray_three_ra[0]));

    printf("Number of elements (columns) in each row in 3D integer array iArray_three_ra = %llu\n", (sizeof(iArray_three_ra[0]) / sizeof(iArray_three_ra[0][0])));
    num_cols_3D_ra = (sizeof(iArray_three_ra[0]) / sizeof(iArray_three_ra[0][0]));

    printf("Number of elements (depth) in one column in one row in 3D integer array iArray_three_ra = %llu\n", (sizeof(iArray_three_ra[0][0]) / sizeof(iArray_three_ra[0][0][0])));
    num_cols_3D_ra = (sizeof(iArray_three_ra[0][0]) / sizeof(iArray_three_ra[0][0][0]));

    printf("Number of elements in total in 3D array iArray_three_ra = %d\n", (num_rows_3D_ra * num_cols_3D_ra * num_depth_3D_ra));

    printf("\n\n");

    return (0);
}