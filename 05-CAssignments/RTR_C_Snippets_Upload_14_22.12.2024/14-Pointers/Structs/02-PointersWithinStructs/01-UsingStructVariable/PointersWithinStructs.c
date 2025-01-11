#include <stdio.h>

// Defining Struct
struct MyData
{
    int *ptr_i_ra;
    int i_ra;

    float *ptr_f_ra;
    float f_ra;
    
    double *ptr_d_ra;
    double d_ra;
};

int main(void)
{
    // variable declarations
    struct MyData data_ra;

    // code
    data_ra.i_ra = 9;
    data_ra.ptr_i_ra = &data_ra.i_ra;

    data_ra.f_ra = 11.45f;
    data_ra.ptr_f_ra = &data_ra.f_ra;

    data_ra.d_ra = 30.121995;
    data_ra.ptr_d_ra = &data_ra.d_ra;

    printf("\n\n");
    printf("i_ra = %d\n", *(data_ra.ptr_i_ra));
    printf("Address of 'i_ra' = %p\n", data_ra.ptr_i_ra);

    printf("\n\n");
    printf("f_ra = %f\n", *(data_ra.ptr_f_ra));
    printf("Address of 'f_ra' = %p\n", data_ra.ptr_f_ra);

    printf("\n\n");
    printf("d_ra = %f\n", *(data_ra.ptr_d_ra));
    printf("Address of 'd_ra' = %p\n", data_ra.ptr_d_ra);
    return (0);
}