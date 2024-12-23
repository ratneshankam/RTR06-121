#include <stdio.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
    char name_ra[NAME_LENGTH];
    int age_ra;
    float salary_ra;
    char sex_ra;
    char marital_status_ra[MARITAL_STATUS];
};

int main(void)
{
    // variable declarations
    struct Employee employeeRecord_ra[5]; // an array of 5 struct - each being type 'struct employee'

    char employee_rajesh_ra[] = "Rajesh";
    char employee_reshma_ra[] = "Reshma";
    char employee_rakesh_ra[] = "Rakesh";
    char employee_ravi_ra[] = "Ravi";
    char employee_rahul_ra[] = "Rahul";

    int i_ra;

    // code
    // ******* hard - coded initialization of array of 'struct employee' ********

    // ******** Employee 1 *********
    strcpy(employeeRecord_ra[0].name_ra, employee_rajesh_ra);
    employeeRecord_ra[0].age_ra = 30;
    employeeRecord_ra[0].sex_ra = 'M';
    employeeRecord_ra[0].salary_ra = 50000.0f;
    strcpy(employeeRecord_ra[0].marital_status_ra, "Unmarried");

    // ******** Employee 2 *********
    strcpy(employeeRecord_ra[0].name_ra, employee_reshma_ra);
    employeeRecord_ra[0].age_ra = 32;
    employeeRecord_ra[0].sex_ra = 'F';
    employeeRecord_ra[0].salary_ra = 60000.0f;
    strcpy(employeeRecord_ra[0].marital_status_ra, "Married");

    // ******** Employee 3 *********
    strcpy(employeeRecord_ra[0].name_ra, employee_rakesh_ra);
    employeeRecord_ra[0].age_ra = 29;
    employeeRecord_ra[0].sex_ra = 'M';
    employeeRecord_ra[0].salary_ra = 62000.0f;
    strcpy(employeeRecord_ra[0].marital_status_ra, "Unmarried");

    // ******** Employee 4 *********
    strcpy(employeeRecord_ra[0].name_ra, employee_ravi_ra);
    employeeRecord_ra[0].age_ra = 37;
    employeeRecord_ra[0].sex_ra = 'M';
    employeeRecord_ra[0].salary_ra = 57000.0f;
    strcpy(employeeRecord_ra[0].marital_status_ra, "Married");

    // ******** Employee 5 *********
    strcpy(employeeRecord_ra[0].name_ra, employee_rahul_ra);
    employeeRecord_ra[0].age_ra = 42;
    employeeRecord_ra[0].sex_ra = 'M';
    employeeRecord_ra[0].salary_ra = 73000.0f;
    strcpy(employeeRecord_ra[0].marital_status_ra, "Married");

    // *** Display ***
    printf("\n\n");
    printf("******* Displaying employee records *******\n\n");
    for (i_ra = 0; i_ra < 5; i_ra++)
    {
        printf("****** Employee number %d ******\n\n", (i_ra + 1));
        printf("Name        : %s\n", employeeRecord_ra[i_ra].name_ra);
        printf("Age        : %s\n", employeeRecord_ra[i_ra].age_ra);

        if (employeeRecord_ra[i_ra].sex_ra == 'M' || employeeRecord_ra[i_ra].sex_ra == 'm')
        {
            printf("Sex        : Male\n");
        }
        else
        {
            printf("Sex        : Female\n");
        }

        printf("Salary          : Rs. %f\n", employeeRecord_ra[i_ra].salary_ra);
        printf("Marital Status : %s\n", employeeRecord_ra[i_ra].marital_status);

        printf("\n\n");
    }
    return (0);
}