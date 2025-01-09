#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // variables declarations
    int **ptr_iArray_ra = NULL; // A pointer to pointer to integer ... but can also hold base address of a 2D array which will can have any number of rows and any number of columns ...
    int i_ra, j_ra;
    int num_rows_ra, num_columns_ra;

    // code

    // *** Accept number of rows 'num_rows_ra' from user ***
    printf("\n\n");
    printf("Enter number of rows : ");
    scanf("%d", &num_rows_ra);

    // *** Accept number of columns 'num_columns_ra' from user ***
    printf("\n\n");
    printf("Enter number of columns : ");
    scanf("%d", &num_columns_ra);

    // *** Allocating memory to 1D array consisting of base address of rows ***
    printf("\n\n");
    printf("************ Memory allocation to 2D integer array ************\n");
    ptr_iArray_ra = (int **)malloc(num_rows_ra * sizeof(int *));
    if (ptr_iArray_ra == NULL)
    {
        printf("Failed to allocate memory to %d rows of 2D integer array !!!\n", num_rows_ra);
        exit(0);
    }
    else
    {
        printf("Memory allocation to %d rows of 2D integer array Succeeded !!!\n", num_rows_ra);
        exit(0);
    }

    // *** Allocating memory to each row which is a 1D array containing consisting of columns which contain the actual integers ***
    for (i_ra = 0; i_ra < num_rows_ra; i_ra++)
    {
        ptr_iArray_ra[i_ra] = (int *)malloc(num_columns_ra * sizeof(int)); // Allocaitng memory (number of columns * size of 'int') to row 'i_ra'
        if (ptr_iArray_ra[i_ra] == NULL)                                   // row 'i_ra' memory allocated ?
        {
            printf("Failed to allocate memory to columns of row %d of 2D integer array !!! exiting now..\n", i_ra);
            exit(0);
        }
        else
        {
            printf("Memory allocation to columns of row %d of 2D integer array succeeded !!!\n", i_ra);
        }
    }

    // *** Filling up values ***
    for (i_ra = 0; i_ra < num_rows_ra; i_ra++)
    {
        for (j_ra = 0; j_ra < num_columns_ra; j_ra++)
        {
            ptr_iArray_ra[i_ra][j_ra] = (i_ra + 1) * (j_ra + 1); // can also use : *(*(ptr_iArray_ra + i_ra) + j_ra) = (i_ra + 1) * (j_ra + 1);
        }
    }

    // *** Displaying values ***
    for (i_ra = 0; i_ra < num_rows_ra; i_ra++)
    {
        printf("Base address of row %d : ptr_iArray_ra[%d] = %p \t at address : %p\n", i_ra, i_ra, ptr_iArray_ra[i_ra], &ptr_iArray_ra[i_ra]);
    }

    printf("\n\n");

    for (i_ra = 0; i_ra < num_rows_ra; i_ra++)
    {
        for (j_ra = 0; j_ra < num_columns_ra; j_ra++)
        {
            printf("ptr_iArray_ra[%d][%d] = %d \t at address : %p\n", i_ra, j_ra, ptr_iArray_ra[i_ra][j_ra], &ptr_iArray_ra[i_ra][j_ra]);
        }
        printf("\n");
    }

    // *** Freeing memory allocated to each row ***
    for (i_ra = (num_rows_ra - 1); i_ra < num_rows_ra; i_ra--)
    {
        if (ptr_iArray_ra[i_ra])
        {
            free(ptr_iArray_ra[i_ra]);
            ptr_iArray_ra[i_ra] = NULL;
            printf("Memory allocated to row %d has been successfully freed !!!\n", i_ra);
        }
    }

    // *** Freeing memory allocated to 1D array consisting of base address of rows ***
    if (ptr_iArray_ra)
    {
        free(ptr_iArray_ra);
        ptr_iArray_ra = NULL;
        printf("Memory allocated to ptr_iArray_ra has been successfully freed !!!\n");
    }

    return (0);
}