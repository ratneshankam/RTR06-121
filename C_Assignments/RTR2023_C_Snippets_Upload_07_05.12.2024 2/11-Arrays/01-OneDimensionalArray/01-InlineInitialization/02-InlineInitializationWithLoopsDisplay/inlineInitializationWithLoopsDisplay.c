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

    int i_ra = 0;

    // code

    // ******* iArray[] *******

    printf("\n\n");
    printf("In-line initialization and loop (for) display of elements of array 'iArray[]' : \n\n");

    int_size_ra = sizeof(int);
    iArray_size_ra = sizeof(iArray_ra);
    iArray_num_elements_ra = iArray_size_ra / int_size_ra;

    for (i_ra = 0; i_ra < iArray_num_elements_ra; i_ra++)
    {

        printf("iArray[%d] (Element %d) = %d\n", i_ra, (i_ra + 1), iArray_ra[i_ra]);
    }

    printf("\n\n");
    printf("Size of data type 'int' = %d bytes\n", int_size_ra);
    printf("Number of elements in 'int' array 'iArray[]' = %d elements\n", iArray_num_elements_ra);
    printf("Size of array 'iArray[]' (%d elements * %d bytes) = %d bytes\n", iArray_num_elements_ra, int_size_ra, iArray_size_ra);

    // ******* fArray[] *******

    printf("\n\n");
    printf("In-line initialization and piece-meal display of elements of array 'fArray[]' : \n\n");

    float_size_ra = sizeof(float);
    fArray_size_ra = sizeof(fArray_ra);
    fArray_num_elements_ra = fArray_size_ra / float_size_ra;

    for (i_ra = 0; i_ra < fArray_num_elements_ra; i_ra++)
    {

        printf("fArray[%d] (Element %d) = %f\n", i_ra, (i_ra + 1), fArray_ra[i_ra]);
    }

    printf("Size of data type 'float' = %d bytes\n", float_size_ra);
    printf("Number of elements in 'float' array 'fArray[]' = %d elements\n", fArray_num_elements_ra);
    printf("Size of array 'fArray[]' (%d elements * %d bytes) = %d bytes\n", fArray_num_elements_ra, float_size_ra, fArray_size_ra);

    // ******* cArray[] *******

    printf("\n\n");
    printf("In-line initialization and piece-meal display of elements of array 'cArray[]' : \n\n");

    char_size_ra = sizeof(char);
    cArray_size_ra = sizeof(cArray_ra);
    cArray_num_elements_ra = cArray_size_ra / char_size_ra;

    for (i_ra = 0; i_ra < cArray_num_elements_ra; i_ra++)
    {

        printf("cArray[%d] (Element %d) = %c\n", i_ra, (i_ra + 1), cArray_ra[i_ra]);
    }

    printf("\n\n");
    printf("Size of data type 'char' = %d bytes\n", char_size_ra);
    printf("Number of elements in 'char' array 'cArray[]' = %d elements\n", cArray_num_elements_ra);
    printf("Size of array 'cArray[]' (%d elements * %d bytes) = %d bytes\n", cArray_num_elements_ra, char_size_ra, cArray_size_ra);

    return (0);
}
