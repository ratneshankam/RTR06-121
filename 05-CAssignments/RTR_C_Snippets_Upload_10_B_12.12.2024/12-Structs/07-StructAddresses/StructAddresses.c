#include <stdio.h>

struct MyData
{
    int i_ra;
    float f_ra;
    double d_ra;
    char c_ra;
};

int main(void)
{
    // variable declarations
    struct MyData data_ra;

    // code
    // Assigning data values to the data members of 'struct MyData'
    data_ra.i_ra = 30;
    data_ra.f_ra = 11.45f;
    data_ra.d_ra = 1.2995;
    data_ra.c_ra = 'A';

    // Displaying values of the data member of 'struct MyData'
    printf("\n\n");
    printf("Data members of 'struct MyData' are : \n");
    printf("i_ra = %d\n", data_ra.i_ra);
    printf("f_ra = %f\n", data_ra.f_ra);
    printf("d_ra = %lf\n", data_ra.d_ra);
    printf("c_ra = %c\n", data_ra.c_ra);

    printf("\n\n");
    printf("Addresses of data members of 'struct MyData' are : \n");
    printf("'i_ra' occupies addresses from %p\n", &data_ra.i_ra);
    printf("'f_ra' occupies addresses from %p\n", &data_ra.f_ra);
    printf("'d_ra' occupies addresses from %p\n", &data_ra.d_ra);
    printf("'c_ra' occupies addresses from %p\n", &data_ra.c_ra);

    printf("Starting address of 'struct MyData' variable 'data' = %p\n\n", &data_ra);

    return (0);
}