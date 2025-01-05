#include <stdio.h>

int main(void)
{
    // variable declarations
    int iArray_ra[] = {12, 24, 36, 48, 60, 72, 84, 96, 108, 120};
    float fArray_ra[] = {9.8f, 8.7f, 7.6f, 6.5f, 5.4f};
    double dArray_ra[] = {1.222222, 2.333333, 3.4444444};
    char cArray_ra[] = {'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0'};

    // code
    printf("\n\n");
    printf("Integer array elements and the addresses they occupy are as follows : \n");
    printf("iArray_ra[0] = %d \t at address : %p\n", *(iArray_ra + 0), (iArray_ra + 0));
    printf("iArray_ra[1] = %d \t at address : %p\n", *(iArray_ra + 1), (iArray_ra + 1));
    printf("iArray_ra[2] = %d \t at address : %p\n", *(iArray_ra + 2), (iArray_ra + 2));
    printf("iArray_ra[3] = %d \t at address : %p\n", *(iArray_ra + 3), (iArray_ra + 3));
    printf("iArray_ra[4] = %d \t at address : %p\n", *(iArray_ra + 4), (iArray_ra + 4));
    printf("iArray_ra[5] = %d \t at address : %p\n", *(iArray_ra + 5), (iArray_ra + 5));
    printf("iArray_ra[6] = %d \t at address : %p\n", *(iArray_ra + 6), (iArray_ra + 6));
    printf("iArray_ra[7] = %d \t at address : %p\n", *(iArray_ra + 7), (iArray_ra + 7));
    printf("iArray_ra[8] = %d \t at address : %p\n", *(iArray_ra + 8), (iArray_ra + 8));
    printf("iArray_ra[9] = %d \t at address : %p\n", *(iArray_ra + 9), (iArray_ra + 9));

    printf("\n\n");
    printf("Float array elements and the addresses they occupy are as follows : \n");
    printf("fArray_ra[0] = %f \t at address : %p\n", *(fArray_ra + 0), (fArray_ra + 0));
    printf("fArray_ra[1] = %f \t at address : %p\n", *(fArray_ra + 1), (fArray_ra + 1));
    printf("fArray_ra[2] = %f \t at address : %p\n", *(fArray_ra + 2), (fArray_ra + 2));
    printf("fArray_ra[3] = %f \t at address : %p\n", *(fArray_ra + 3), (fArray_ra + 3));
    printf("fArray_ra[4] = %f \t at address : %p\n", *(fArray_ra + 4), (fArray_ra + 4));

    printf("\n\n");
    printf("Double array elements and the addresses they occupy are as follows : \n");
    printf("dArray_ra[0] = %f \t at address : %p\n", *(dArray_ra + 0), (dArray_ra + 0));
    printf("dArray_ra[1] = %f \t at address : %p\n", *(dArray_ra + 1), (dArray_ra + 1));
    printf("dArray_ra[2] = %f \t at address : %p\n", *(dArray_ra + 2), (dArray_ra + 2));

    printf("\n\n");
    printf("Character array elements and the addresses they occupy are as follows : \n");
    printf("cArray_ra[0] = %c \t at address : %p\n", *(cArray_ra + 0), (cArray_ra + 0));
    printf("cArray_ra[1] = %c \t at address : %p\n", *(cArray_ra + 1), (cArray_ra + 1));
    printf("cArray_ra[2] = %c \t at address : %p\n", *(cArray_ra + 2), (cArray_ra + 2));
    printf("cArray_ra[3] = %c \t at address : %p\n", *(cArray_ra + 3), (cArray_ra + 3));
    printf("cArray_ra[4] = %c \t at address : %p\n", *(cArray_ra + 4), (cArray_ra + 4));
    printf("cArray_ra[5] = %c \t at address : %p\n", *(cArray_ra + 5), (cArray_ra + 5));
    printf("cArray_ra[6] = %c \t at address : %p\n", *(cArray_ra + 6), (cArray_ra + 6));
    printf("cArray_ra[7] = %c \t at address : %p\n", *(cArray_ra + 7), (cArray_ra + 7));
    printf("cArray_ra[8] = %c \t at address : %p\n", *(cArray_ra + 8), (cArray_ra + 8));
    printf("cArray_ra[9] = %c \t at address : %p\n", *(cArray_ra + 9), (cArray_ra + 9));
    printf("cArray_ra[10] = %c \t at address : %p\n", *(cArray_ra + 10), (cArray_ra + 10));
    printf("cArray_ra[11] = %c \t at address : %p\n", *(cArray_ra + 11), (cArray_ra + 11));
    printf("cArray_ra[12] = %c \t at address : %p\n", *(cArray_ra + 12), (cArray_ra + 12));
    printf("cArray_ra[13] = %c \t at address : %p\n", *(cArray_ra + 13), (cArray_ra + 13));

    return (0);
}