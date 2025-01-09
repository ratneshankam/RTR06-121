#include <stdio.h>
#include <stdlib.h>

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
        printf("Successfully allocated memory to 'struct MyData' !!!");
    }

    pData_ra->i_ra = 9;
    pData_ra->ptr_i_ra = &(pData_ra->i_ra);

    pData_ra->f_ra = 11.45f;
    pData_ra->ptr_f_ra = &(pData_ra->f_ra);

    pData_ra->d_ra = 30.121995;
    pData_ra->ptr_d_ra = &(pData_ra->d_ra);

    printf("\n\n");
    printf("i_ra = %d\n", *(pData_ra->ptr_i_ra));
    printf("Address of 'i_ra' = %p\n", pData_ra->ptr_i_ra);

    printf("\n\n");
    printf("f_ra = %f\n", *(pData_ra->ptr_f_ra));
    printf("Address of 'f_ra' = %p\n", pData_ra->ptr_f_ra);

    printf("\n\n");
    printf("d_ra = %f\n", *(pData_ra->ptr_d_ra));
    printf("Address of 'd_ra' = %p\n", pData_ra->ptr_d_ra);

    if (pData_ra)
    {
        free(pData_ra);
        pData_ra = NULL;
        printf("Memory allocated to 'struct MyData' has been successfully freed !!!\n\n");
    }

    return (0);
}