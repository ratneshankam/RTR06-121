#include <stdio.h>
#include <stdlib.h>

// Defining Struct
struct MyData
{
    int i_ra;
    float f_ra;
    double d_ra;
};

int main(void)
{
    // variable declarations
    int i_size_ra;
    int f_size_ra;
    int d_size_ra;
    int struct_MyData_size_ra;
    int pointer_to_struct_MyData_size_ra;

    struct MyData *pData_ra = NULL;

    // code
    printf("\n\n");

    pData_ra = (struct MyData *)malloc(sizeof(struct MyData));

    if (pData_ra == NULL)
    {
        printf("Failed to allocate memory to 'struct MyData' !!! Exiting Now ...\n");
        exit(0);
    }
    else
    {
        printf("Memory allocated to 'struct MyData' successfully !!!\n");
    }

    // Assigning data values to the data members of 'struct MyData'
    pData_ra->i_ra = 30;
    pData_ra->f_ra = 11.45f;
    pData_ra->d_ra = 1.29995;

    // Displaying values of the data members of 'struct MyData'
    printf("\n\n");
    printf("Data members of 'struct MyData' are : \n");
    printf("i_ra = %d\n", pData_ra->i_ra);
    printf("f_ra = %f\n", pData_ra->f_ra);
    printf("d_ra = %lf\n", pData_ra->d_ra);

    // Calculating sizes (In bytes) of the data members of 'struct MyData'
    i_size_ra = sizeof(pData_ra->i_ra);
    f_size_ra = sizeof(pData_ra->f_ra);
    d_size_ra = sizeof(pData_ra->d_ra);

    // Displaying sizes (In bytes) of the data members of 'struct MyData'
    printf("\n\n");
    printf("Sizes (In bytes) of the data members of 'struct MyData' are : \n");
    printf("Size of 'i_ra' = %d bytes\n", i_size_ra);
    printf("Size of 'f_ra' = %d bytes\n", f_size_ra);
    printf("Size of 'd_ra' = %d bytes\n", d_size_ra);

    // Calculating sizes (In bytes) of the entire 'struct MyData'
    struct_MyData_size_ra = sizeof(struct MyData);
    pointer_to_struct_MyData_size_ra = sizeof(struct MyData *);

    // Displaying sizes (In bytes) of the entire 'struct MyData'
    printf("\n\n");
    printf("Sizes (In bytes) of the entire 'struct MyData' are : \n");
    printf("Size of 'struct MyData' = %d bytes\n", struct_MyData_size_ra);
    printf("Size of pointer to 'struct MyData' = %d bytes\n", pointer_to_struct_MyData_size_ra);

    if (pData_ra)
    {
        free(pData_ra);
        pData_ra = NULL;
        printf("Memory allocated to 'struct MyData' has been successfully freed !!\n");
    }

    return (0);
}