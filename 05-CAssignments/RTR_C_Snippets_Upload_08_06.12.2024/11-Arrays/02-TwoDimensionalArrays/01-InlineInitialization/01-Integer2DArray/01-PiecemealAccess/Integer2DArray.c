#include <stdio.h>

int main(void)
{

    // variable declarations
    int iArray_ra[5][3] = {{1, 2, 3}, {2, 4, 6}, {3, 6, 9}, {4, 8, 12}, {5, 10, 15}}; // In-Line Initialization
    int int_size_ra = 0, iArray_size_ra = 0, iArray_num_elements_ra = 0, iArray_num_rows_ra = 0, iArray_num_columns_ra = 0;

    // code
    printf("\n\n");

    int_size_ra = sizeof(int);
    iArray_size_ra = sizeof(iArray_ra);

    printf("Size of two dimensional integer array is = %d\n",iArray_size_ra);

    iArray_num_rows_ra = iArray_size_ra / sizeof(iArray_ra[0]);
    printf("Number of rows in 2D integer array is = %d\n",iArray_num_rows_ra);

    iArray_num_columns_ra = sizeof(iArray_ra[0])/ int_size_ra;
    printf("Number of columns in 2D integer array is = %d\n",iArray_num_columns_ra);

    iArray_num_elements_ra = iArray_num_rows_ra * iArray_num_columns_ra;
    printf("Number of elements in 2D integer array is = %d\n",iArray_num_elements_ra);

    printf("\n\n");
    printf("Elements in the 2D array : \n");

    // *** Array indices begin from 0, hence, 1st row is actually 0th row and 1st column is actually 0th column ***

    // *** Row 1 ***
    printf("*** Row 1 ***");
    printf("iArray_ra[0][0] = %d\n", iArray_ra[0][0]); // *** column 1 *** (0th element) => 1
    printf("iArray_ra[0][1] = %d\n", iArray_ra[0][1]); // *** column 2 *** (1st element) => 2
    printf("iArray_ra[0][2] = %d\n", iArray_ra[0][2]); // *** column 3 *** (2nd element) => 3
    printf("\n\n");

    // *** Row 2 ***
    printf("***** Row 2 *****");
    printf("iArray_ra[1][0] = %d\n", iArray_ra[1][0]); // *** column 1 *** (0th element) => 2
    printf("iArray_ra[1][1] = %d\n", iArray_ra[1][1]); // *** column 2 *** (1st element) => 4
    printf("iArray_ra[1][2] = %d\n", iArray_ra[1][2]); // *** column 3 *** (2nd element) => 6
    printf("\n\n");

    // *** Row 3 ***
    printf("***** Row 3 *****");
    printf("iArray_ra[2][0] = %d\n", iArray_ra[2][0]); // *** column 1 *** (0th element) => 3
    printf("iArray_ra[2][1] = %d\n", iArray_ra[2][1]); // *** column 2 *** (1st element) => 6
    printf("iArray_ra[2][2] = %d\n", iArray_ra[2][2]); // *** column 3 *** (2nd element) => 9
    printf("\n\n");

    // *** Row 4 ***
    printf("***** Row 4 *****");
    printf("iArray_ra[3][0] = %d\n", iArray_ra[3][0]); // *** column 1 *** (0th element) => 4
    printf("iArray_ra[3][1] = %d\n", iArray_ra[3][1]); // *** column 2 *** (1st element) => 8
    printf("iArray_ra[3][2] = %d\n", iArray_ra[3][2]); // *** column 3 *** (2nd element) => 12
    printf("\n\n");

    // *** Row 5 ***
    printf("***** Row 5 *****");
    printf("iArray_ra[4][0] = %d\n", iArray_ra[4][0]); // *** column 1 *** (0th element) => 5
    printf("iArray_ra[4][1] = %d\n", iArray_ra[4][1]); // *** column 2 *** (1st element) => 10
    printf("iArray_ra[4][2] = %d\n", iArray_ra[4][2]); // *** column 3 *** (2nd element) => 15
    printf("\n\n");

    return (0);
}