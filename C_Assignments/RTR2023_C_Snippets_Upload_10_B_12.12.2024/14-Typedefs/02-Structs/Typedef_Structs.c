#include <stdio.h>

#define MAX_NAME_LENGTH 100

struct Employee
{
    char name_ra[MAX_NAME_LENGTH];
    unsigned int age_ra;
    char gender_ra;
    double salary_ra;
};

struct MyData
{
    int i_ra;
    float f_ra;
    double d_ra;
    char c_ra;
};

int main(void)
{
    // Typedefs
    typedef struct Employee MY_EMPLOYEE_TYPE;
    typedef struct MyData MY_DATA_TYPE;

    // variable declarations
    struct Employee emp_ra = {"Funny", 25, 'M', 10000.00};
    MY_EMPLOYEE_TYPE emp_typedef_ra = {"Bunny", 23, 'F', 20400.00};

    struct MyData md_ra = {30, 11.45f, 26.122107, 'X'};
    MY_DATA_TYPE md_typedef_ra;

    // code
    md_typedef_ra.i_ra = 9;
    md_typedef_ra.f_ra = 1.45f;
    md_typedef_ra.d_ra = 8.123456;
    md_typedef_ra.c_ra = 'R';

    printf("\n\n");
    printf("struct Employee : \n\n");
    printf("emp_ra.name_ra      = %s\n", emp_ra.name_ra);
    printf("emp_ra.age_ra       = %u\n", emp_ra.age_ra);
    printf("emp_ra.gender_ra    = %c\n", emp_ra.gender_ra);
    printf("emp_ra.salary_ra    = %f\n", emp_ra.salary_ra);

    printf("\n\n");
    printf("MY_EMPLOYEE_TYPE : \n\n");
    printf("emp_typedef_ra.name_ra      = %s\n", emp_typedef_ra.name_ra);
    printf("emp_typedef_ra.age_ra       = %u\n", emp_typedef_ra.age_ra);
    printf("emp_typedef_ra.gender_ra    = %c\n", emp_typedef_ra.gender_ra);
    printf("emp_typedef_ra.salary_ra    = %f\n", emp_typedef_ra.salary_ra);

    printf("\n\n");
    printf("struct MyData : \n\n");
    printf("md_ra.i_ra = %d\n", md_ra.i_ra);
    printf("md_ra.f_ra = %f\n", md_ra.f_ra);
    printf("md_ra.d_ra = %f\n", md_ra.d_ra);
    printf("md_ra.c_ra = %c\n", md_ra.c_ra);

    printf("\n\n");
    printf("MY_DATA_TYPE : \n\n");
    printf("md_typedef_ra.i_ra = %d\n", md_typedef_ra.i_ra);
    printf("md_typedef_ra.f_ra = %f\n", md_typedef_ra.f_ra);
    printf("md_typedef_ra.d_ra = %f\n", md_typedef_ra.d_ra);
    printf("md_typedef_ra.c_ra = %c\n", md_typedef_ra.c_ra);

    printf("\n\n");

    return (0);
}