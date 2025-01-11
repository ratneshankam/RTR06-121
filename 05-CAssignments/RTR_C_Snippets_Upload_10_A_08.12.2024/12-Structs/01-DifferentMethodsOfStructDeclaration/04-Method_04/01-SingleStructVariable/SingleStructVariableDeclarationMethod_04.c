#include <stdio.h>

// Defining Struct
struct MyData
{
    int i_ra;
    float f_ra;
    double d_ra;
};

int main(void)
{
    struct MyData data; // Declaring a single struct variable of type 'struct MyData' locally ...

    // variable declarations
    int i_size_ra = 0, f_size_ra = 0, d_size_ra = 0, struct_myData_size_ra = 0;

    // code

    // assigning data values to the data members of 'struct MyData'
    data.i_ra = 30;
    data.f_ra = 11.45f;
    data.d_ra = 1.2995;

    // displaying values of the data members of 'struct MyData'
    printf("\n\n");
    printf("Data members of 'struct MyData' are : \n\n");
    printf("i = %d\n", data.i_ra);
    printf("f = %f\n", data.f_ra);
    printf("d = %lf\n", data.d_ra);

    // calculating sizes (in bytes) of the data members of 'struct MyData'
    i_size_ra = sizeof(data.i_ra);
    f_size_ra = sizeof(data.f_ra);
    d_size_ra = sizeof(data.d_ra);

    // displaying sizes (in bytes) of the data members of 'struct MyData'
    printf("\n\n");
    printf("Sizes (in bytes) of the data members of 'struct MyData' are : \n\n");
    printf("size of 'i' = %d bytes \n", i_size_ra);
    printf("size of 'f' = %d bytes \n", f_size_ra);
    printf("size of 'd' = %d bytes \n", d_size_ra);

    // calculating size (in bytes) of the entire 'struct MyData'
    struct_myData_size_ra = sizeof(struct MyData); // can also give struct name -> sizeof(myData)

    // displaying sizes (in bytes) of the entire 'struct MyData'
    printf("\n\n");
    printf("size of 'struct MyData' = %d\n", struct_myData_size_ra);

    return (0);
}