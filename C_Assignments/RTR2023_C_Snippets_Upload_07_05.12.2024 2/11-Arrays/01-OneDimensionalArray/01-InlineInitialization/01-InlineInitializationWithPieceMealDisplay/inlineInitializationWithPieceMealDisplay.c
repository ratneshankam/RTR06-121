#include <stdio.h>

int main(void)
{
    // variables declarations
    int iArray_ra[] = {9, 30, 6, 12, 98, 95, 20, 23, 2, 45};
    int int_size_ra;
    int iArray_size_ra;
    int iArray_num_elements_ra;

    float fArray_ra[] = {1.2f, 2.3f, 3.4f, 4.5f, 5.6f, 6.7f, 7.8f, 8.9f};
    int float_size_ra;
    int fArray_size_ra;
    int fArray_num_elements_ra;

    char cArray_ra[] = {'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P'};
    int char_size_ra;
    int cArray_size_ra;
    int cArray_num_elements_ra;

    // code

    // ******* iArray[] *******

    printf("\n\n");
    printf("In-line initialization and piece-meal display of elements of array 'iArray[]' : \n\n");
    printf("iArray[0] (1st element) = %d\n",iArray_ra[0]);
    printf("iArray[1] (2nd element) = %d\n",iArray_ra[1]);
    printf("iArray[2] (2nd element) = %d\n",iArray_ra[2]);
    printf("iArray[3] (3rd element) = %d\n",iArray_ra[3]);
    printf("iArray[4] (4th element) = %d\n",iArray_ra[4]);
    printf("iArray[5] (5th element) = %d\n",iArray_ra[5]);
    printf("iArray[6] (6th element) = %d\n",iArray_ra[6]);
    printf("iArray[7] (7th element) = %d\n",iArray_ra[7]);
    printf("iArray[8] (8th element) = %d\n",iArray_ra[8]);
    printf("iArray[9] (9th element) = %d\n\n",iArray_ra[9]);

    int_size_ra = sizeof(int);
    iArray_size_ra = sizeof(iArray_ra);
    iArray_num_elements_ra = iArray_size_ra / int_size_ra;
    printf("Size of data type 'int' = %d bytes\n", int_size_ra);
    printf("Number of elements in 'int' array 'iArray[]' = %d elements\n", iArray_num_elements_ra);
    printf("Size of array 'iArray[]' (%d elements * %d bytes) = %d bytes\n", iArray_num_elements_ra, int_size_ra, iArray_size_ra);

    // ******* fArray[] *******

    printf("\n\n");
    printf("In-line initialization and piece-meal display of elements of array 'fArray[]' : \n\n");
    printf("fArray[0] (1st element) = %f\n", fArray_ra[0]);
    printf("fArray[1] (2nd element) = %f\n", fArray_ra[1]);
    printf("fArray[2] (2nd element) = %f\n", fArray_ra[2]);
    printf("fArray[3] (3rd element) = %f\n", fArray_ra[3]);
    printf("fArray[4] (4th element) = %f\n", fArray_ra[4]);
    printf("fArray[5] (5th element) = %f\n", fArray_ra[5]);
    printf("fArray[6] (6th element) = %f\n", fArray_ra[6]);
    printf("fArray[7] (7th element) = %f\n", fArray_ra[7]);
    printf("fArray[8] (8th element) = %f\n", fArray_ra[8]);
    printf("fArray[9] (9th element) = %f\n\n", fArray_ra[9]);

    float_size_ra = sizeof(float);
    fArray_size_ra = sizeof(fArray_ra);
    fArray_num_elements_ra = fArray_size_ra / float_size_ra;
    printf("Size of data type 'float' = %d bytes\n", float_size_ra);
    printf("Number of elements in 'float' array 'fArray[]' = %d elements\n", fArray_num_elements_ra);
    printf("Size of array 'fArray[]' (%d elements * %d bytes) = %d bytes\n", fArray_num_elements_ra, float_size_ra, fArray_size_ra);

    // ******* cArray[] *******

    printf("\n\n");
    printf("In-line initialization and piece-meal display of elements of array 'cArray[]' : \n\n");
    printf("cArray[0] (1st element) = %c\n", cArray_ra[0]);
    printf("cArray[1] (2nd element) = %c\n", cArray_ra[1]);
    printf("cArray[2] (2nd element) = %c\n", cArray_ra[2]);
    printf("cArray[3] (3rd element) = %c\n", cArray_ra[3]);
    printf("cArray[4] (4th element) = %c\n", cArray_ra[4]);
    printf("cArray[5] (5th element) = %c\n", cArray_ra[5]);
    printf("cArray[6] (6th element) = %c\n", cArray_ra[6]);
    printf("cArray[7] (7th element) = %c\n", cArray_ra[7]);
    printf("cArray[8] (8th element) = %c\n", cArray_ra[8]);
    printf("cArray[9] (9th element) = %c\n\n", cArray_ra[9]);

    char_size_ra = sizeof(char);
    cArray_size_ra = sizeof(cArray_ra);
    cArray_num_elements_ra = cArray_size_ra / char_size_ra;
    printf("Size of data type 'char' = %d bytes\n", char_size_ra);
    printf("Number of elements in 'char' array 'cArray[]' = %d elements\n", cArray_num_elements_ra);
    printf("Size of array 'cArray[]' (%d elements * %d bytes) = %d bytes\n", cArray_num_elements_ra, char_size_ra, cArray_size_ra);

    return (0);
}
