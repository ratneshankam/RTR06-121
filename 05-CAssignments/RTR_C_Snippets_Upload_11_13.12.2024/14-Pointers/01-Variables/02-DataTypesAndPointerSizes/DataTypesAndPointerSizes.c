#include <stdio.h>

#define NAME_LENGTH 100

struct Employee
{
    char name_ra[NAME_LENGTH];
    int age_ra;
    float salary_ra;
    char sex_ra;
    char marital_status_ra;
};

int main(void)
{
    // code
    printf("\n\n");

    printf("Sizes of data types and pointers to those respective data types are : \n");
    printf("Size of (int)               : %zd \t \t \t size of pointer to int (int*)   : %zd\n\n", sizeof(int), sizeof(int *));
    printf("Size of (float)             : %zd \t \t \t size of pointer to float (float*) : %zd\n\n", sizeof(float), sizeof(float *));
    printf("Size of (double)            : %zd \t \t \t size of pointer to double (double*) : %zd\n\n", sizeof(double), sizeof(double *));
    printf("Size of (char)              : %zd \t \t \t size of pointer to char (char*) : %zd\n\n", sizeof(char), sizeof(char *));
    printf("Size of (struct Employee)   : %zd \t \t \t size of pointer to struct Employee (struct Employee*) : %zd\n\n", sizeof(struct Employee), sizeof(struct Employee *));

    return (0);
}