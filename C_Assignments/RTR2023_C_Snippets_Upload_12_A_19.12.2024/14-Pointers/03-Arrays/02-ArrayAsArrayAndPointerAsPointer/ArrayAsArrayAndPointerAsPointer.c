#include <stdio.h>

int main(void)
{
    // variable declarations
    int iArray_ra[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; // Integer array
    int *ptr_iArray_ra = NULL;                                   // Integer pointer

    // code
    printf("\n\n");

    // ####### Using array name as a array i.e : value of xth element of iArray_ra : iArray_ra[x] and address of xth element of iArray_ra : &iArray_ra[x] #######
    printf("*** Using array name as a array i.e : value of xth element of iArray_ra : iArray_ra[x] and address of xth element of iArray_ra : &iArray_ra[x] ***\n");
    printf("Integer array elements and their addresses : \n\n");

    printf("iArray_ra[0] = %d \t at address &iArray_ra[0] : %p\n", (iArray_ra[0]), (&iArray_ra[0]));
    printf("iArray_ra[1] = %d \t at address &iArray_ra[1] : %p\n", (iArray_ra[1]), (&iArray_ra[1]));
    printf("iArray_ra[2] = %d \t at address &iArray_ra[2] : %p\n", (iArray_ra[2]), (&iArray_ra[2]));
    printf("iArray_ra[3] = %d \t at address &iArray_ra[3] : %p\n", (iArray_ra[3]), (&iArray_ra[3]));
    printf("iArray_ra[4] = %d \t at address &iArray_ra[4] : %p\n", (iArray_ra[4]), (&iArray_ra[4]));
    printf("iArray_ra[5] = %d \t at address &iArray_ra[5] : %p\n", (iArray_ra[5]), (&iArray_ra[5]));
    printf("iArray_ra[6] = %d \t at address &iArray_ra[6] : %p\n", (iArray_ra[6]), (&iArray_ra[6]));
    printf("iArray_ra[7] = %d \t at address &iArray_ra[7] : %p\n", (iArray_ra[7]), (&iArray_ra[7]));
    printf("iArray_ra[8] = %d \t at address &iArray_ra[8] : %p\n", (iArray_ra[8]), (&iArray_ra[8]));
    printf("iArray_ra[9] = %d \t at address &iArray_ra[9] : %p\n", (iArray_ra[9]), (&iArray_ra[9]));

    // Assigning base address of integer array 'iArray_ra' to integer pointer 'ptr_iArray_ra'
    // Name of any array is its own base address
    ptr_iArray_ra = iArray_ra; // Same as ... ptr_iArray_ra = &iArray_ra[0]

    // ######## Using pointer as pointer i.e : value of xth element of iArray_ra : *(ptr_iArray_ra + x) and address of xth element of iArray_ra : (ptr_iArray_ra + x) #########
    printf("\n\n");
    printf("*** Using pointer as pointer i.e : value of xth element of iArray_ra : *(ptr_iArray_ra + x) and address of xth element of iArray_ra : (ptr_iArray_ra + x) ***\n");
    printf("Integer array elements and their addresses : \n\n");
    printf("*(ptr_iArray_ra + 0) = %d \t at address (ptr_iArray_ra + 0) : %p\n", *(ptr_iArray_ra + 0), (ptr_iArray_ra + 0));
    printf("*(ptr_iArray_ra + 1) = %d \t at address (ptr_iArray_ra + 1) = %d\n", *(ptr_iArray_ra + 1), (ptr_iArray_ra + 1));
    printf("*(ptr_iArray_ra + 2) = %d \t at address (ptr_iArray_ra + 2) = %d\n", *(ptr_iArray_ra + 2), (ptr_iArray_ra + 2));
    printf("*(ptr_iArray_ra + 3) = %d \t at address (ptr_iArray_ra + 3) = %d\n", *(ptr_iArray_ra + 3), (ptr_iArray_ra + 3));
    printf("*(ptr_iArray_ra + 4) = %d \t at address (ptr_iArray_ra + 4) = %d\n", *(ptr_iArray_ra + 4), (ptr_iArray_ra + 4));
    printf("*(ptr_iArray_ra + 5) = %d \t at address (ptr_iArray + 5) = %d\n", *(ptr_iArray_ra + 5), (ptr_iArray_ra + 5));
    printf("*(ptr_iArray_ra + 6) = %d \t at address (ptr_iArray_ra + 6) = %d\n", *(ptr_iArray_ra + 6), (ptr_iArray_ra + 6));
    printf("*(ptr_iArray_ra + 7) = %d \t at address (ptr_iArray_ra + 7) = %d\n", *(ptr_iArray_ra + 7), (ptr_iArray_ra + 7));
    printf("*(ptr_iArray_ra + 8) = %d \t at address (ptr_iArray_ra + 8) = %d\n", *(ptr_iArray_ra + 8), (ptr_iArray_ra + 8));
    printf("*(ptr_iArray_ra + 9) = %d \t at address (ptr_iArray_ra + 9) = %d\n", *(ptr_iArray_ra + 9), (ptr_iArray_ra + 9));

    return (0);
}
