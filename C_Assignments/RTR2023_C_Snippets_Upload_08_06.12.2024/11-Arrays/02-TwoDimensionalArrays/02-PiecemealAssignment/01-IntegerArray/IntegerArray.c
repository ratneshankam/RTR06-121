#include <stdio.h>

int main(void)
{

    // variables declarations
    int iArray_ra[3][5]; // 3 rows (0,1,2) and 5 columns (0,1,2,3,4)
    int int_size_ra;
    int iArray_size_ra;
    int iArray_num_elements_ra, iArray_num_rows_ra, iArray_num_cols_ra;
    int i_ra, j_ra;

    // code
    printf("\n\n");

    int_size_ra = sizeof(int);

    iArray_size_ra = sizeof(iArray_ra);
    printf("Size of two dimensional (2D) Integer array = %d\n", iArray_size_ra);

    iArray_num_rows_ra = iArray_size_ra / sizeof(iArray_ra[0]);
    printf("Number of rows in 2D integer array = %d\n", iArray_num_rows_ra);

    iArray_num_cols_ra = sizeof(iArray_ra[0]) / int_size_ra;
    printf("Number of columns in 2D integer array = %d\n", iArray_num_cols_ra);

    iArray_num_elements_ra = iArray_num_rows_ra * iArray_num_cols_ra;
    printf("Number of elements in 2D integer array = %d\n", iArray_num_elements_ra);

    printf("\n\n");
    printf("Elements in the 2D array : \n\n");

    // ******* Piece-Meal Assignment ********

    // ********** Row 1 ***********
    iArray_ra[0][0] = 21;
    iArray_ra[0][1] = 42;
    iArray_ra[0][2] = 63;
    iArray_ra[0][3] = 84;
    iArray_ra[0][4] = 105;

    // ********** Row 2 ***********
    iArray_ra[1][0] = 22;
    iArray_ra[1][1] = 44;
    iArray_ra[1][2] = 66;
    iArray_ra[1][3] = 88;
    iArray_ra[1][4] = 110;

    // ********** Row 3 ***********
    iArray_ra[2][0] = 23;
    iArray_ra[2][1] = 46;
    iArray_ra[2][2] = 69;
    iArray_ra[2][3] = 92;
    iArray_ra[2][4] = 115;

    // *** DISPLAY ***
    for (i_ra = 0; i_ra < iArray_num_rows_ra; i_ra++)
    {
        printf("******* ROW %d *******\n", (i_ra + 1));
        for (j_ra = 0; j_ra < iArray_num_cols_ra; j_ra++)
        {
            printf("iArray[%d][%d] = %d\n", i_ra, j_ra, iArray_ra[i_ra][j_ra]);
        }
        printf("\n\n");
    }

    return (0);
}
