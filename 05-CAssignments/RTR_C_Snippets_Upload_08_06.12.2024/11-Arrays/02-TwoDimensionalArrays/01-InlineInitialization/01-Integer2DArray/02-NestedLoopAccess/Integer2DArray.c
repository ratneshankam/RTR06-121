#include <stdio.h>

int main(void)
{

    // variable declarations
    int iArray_ra[5][3] = {{1, 2, 3}, {2, 4, 6}, {3, 6, 9}, {4, 8, 12}, {5, 10, 15}}; // In-Line Initialization
    int int_size_ra = 0, iArray_size_ra = 0, iArray_num_elements_ra = 0, iArray_num_rows_ra = 0, iArray_num_columns_ra = 0;
    int i_ra = 0, j_ra = 0;
    // code
    printf("\n\n");

    int_size_ra = sizeof(int);
    iArray_size_ra = sizeof(iArray_ra);

    printf("Size of two dimensional integer array is = %d\n", iArray_size_ra);

    iArray_num_rows_ra = iArray_size_ra / sizeof(iArray_ra[0]);
    printf("Number of rows in 2D integer array is = %d\n", iArray_num_rows_ra);

    iArray_num_columns_ra = sizeof(iArray_ra[0]) / int_size_ra;
    printf("Number of columns in 2D integer array is = %d\n", iArray_num_columns_ra);

    iArray_num_elements_ra = iArray_num_rows_ra * iArray_num_columns_ra;
    printf("Number of elements in 2D integer array is = %d\n", iArray_num_elements_ra);

    printf("\n\n");
    printf("Elements in the 2D array : \n");

    // *** Array indices begin from 0, hence, 1st row is actually 0th row and 1st column is actually 0th column ***

    for (i_ra = 0; i_ra < iArray_num_rows_ra; i_ra++)
    {
        printf("*** Row %d ***\n", (i_ra + 1));
        for (j_ra = 0; j_ra < iArray_num_columns_ra; j_ra++)
        {
            printf("iArray_ra[%d][%d] = %d\n", i_ra, j_ra, iArray_ra[i_ra][j_ra]);
        }
        printf("\n\n");
    }

    return (0);
}