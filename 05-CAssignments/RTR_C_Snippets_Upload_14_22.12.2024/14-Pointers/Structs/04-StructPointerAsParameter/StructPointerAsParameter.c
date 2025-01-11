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
    // function prototypes
    void changeValues(struct MyData *);

    // variable declarations
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

    changeValues(pData_ra);

    // Displaying values of the data members of 'struct MyData'
    printf("\n\n");
    printf("Data members of 'struct MyData' are : \n");
    printf("i_ra = %d\n", pData_ra->i_ra);
    printf("f_ra = %f\n", pData_ra->f_ra);
    printf("d_ra = %lf\n", pData_ra->d_ra);

    if (pData_ra)
    {
        free(pData_ra);
        pData_ra = NULL;
        printf("Memory allocated to 'struct MyData' has been successfully freed !!\n");
    }

    return (0);
}

void changeValues(struct MyData *pParam_data_ra)
{
    // code
    pParam_data_ra->i_ra = 9;
    pParam_data_ra->f_ra = 8.2f;
    pParam_data_ra->d_ra = 6.1998;

    // Can also do this as ...
    /*
        (*pParam_data_ra).i_ra = 9;
        (*pParam_data_ra).f_ra = 8.2f;
        (*pParam_data_ra).d_ra = 6.1998;
    */
}