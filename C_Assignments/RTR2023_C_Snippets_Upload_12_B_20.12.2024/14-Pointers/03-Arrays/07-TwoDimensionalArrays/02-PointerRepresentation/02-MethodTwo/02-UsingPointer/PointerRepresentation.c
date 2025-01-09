#include <stdio.h>
#include <stdlib.h> // contains prototypes of malloc() and free()

#define NUM_ROWS 5
#define NUM_COLS 3

int main(void)
{
    // variables declarations
    int i_ra, j_ra;
    int **ptr_iArray_ra = NULL;

    unsigned int intArrayLength_ra = 0;
    int i_ra;

    // code
    // *** Every row of a 2D array is an integer array itself comprising of 'NUM_COLS' integer elements ***
    // *** There are 5 rows and 3 columns in a 2D integer array. each of the 5 rows is a 1D array of 3 integers ***
    // *** Hence, each of these 5 rows themselves being array, will be the base addresses of their respective rows ***
    printf("\n\n");

    // *** Memory Allocation ***
    ptr_iArray_ra = (int *)malloc(NUM_ROWS * sizeof(int *)); // ptr_iArray_ra is the name and base address of the 1D array conaining 5 integer pointers to 5 integer arrays ... so it is an array containing elements of data type (int *)
    if (ptr_iArray_ra == NULL)
    {
        printf("\n\n");
        printf("Memory allocation to the 1D array of base addresses of %d rows failed !!! Exitting now ...\n", NUM_ROWS);
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("Memory allocation to the 1D array of base addresses of %d rows has succeeded !!!\n", NUM_ROWS);
    }

    // *** Allocating Memory To Each Row ***
    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        ptr_iArray_ra[i_ra] = (int *)malloc(NUM_COLS * sizeof(int)); // ptr_iArray_ra[i_ra] is the base address of ith row ...
        if (ptr_iArray_ra[i_ra] == NULL)
        {
            printf("Memory allocation to the columns of %d rows failed !!! Exitting now ...\n", i_ra);
            exit(0);
        }
        else
        {
            printf("\n\n");
            printf("Memory allocation to the columns of %d rows has succeeded !!!\n", i_ra);
        }
    }

    // *** Assigning Values ***
    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        for (j_ra = 0; j_ra < NUM_COLS; j_ra++)
        {
            *(*(ptr_iArray_ra + i_ra) + j_ra) = (i_ra + 1) * (j_ra + 1); // ptr_iArray_ra[i_ra][j_ra] = (i_ra + 1) * (j_ra + 1);
        }
    }

    // *** Displaying Values ***
    prinf("\n\n");
    printf("2D integer array elements along with addresses : \n\n");
    for (i_ra = 0; i_ra < NUM_ROWS; i_ra++)
    {
        for (j_ra = 0; j_ra < NUM_COLS; j_ra++)
        {
            printf("ptr_iArray_ra[%d][%d] = %d \t \t at address &ptr_iArray_ra[%d][%d] : %p\n", i_ra, j_ra, ptr_iArray_ra[i_ra][j_ra], i_ra, j_ra, &ptr_iArray_ra[i_ra][j_ra]);
        }
        printf("\n\n");
    }

    // *** Freeing Allocated Memory ***
    // *** Freeing Memory Of Each Row ***
    for (i_ra = (NUM_ROWS - 1); i_ra >= 0; i_ra--)
    {
        if (*(ptr_iArray_ra + i_ra)) // if(ptr_iArray_ra[i_ra])
        {
            free(*(ptr_iArray_ra + i_ra));  // free(ptr_iArray_ra[i_ra])
            *(ptr_iArray_ra + i_ra) = NULL; // ptr_iArray_ra[i_ra] = NULL;
            printf("Memory allocated to row %d has been successfully freed !!!\n\n", i_ra);
        }
    }

    // *** Freeing memory of ptr_iArray_ra which is the array of 5 integer pointers ... that it, it is an array having 5 integer addresses (type int *) ***
    if (ptr_iArray_ra)
    {
        free(ptr_iArray_ra);
        ptr_iArray_ra = NULL;
        printf("Memory allocated to ptr_iArray_ra has been successfully freed !!!\n\n");
    }

    return (0);
}