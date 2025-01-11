#include <stdio.h>
#include <ctype.h>

#define NUM_EMPLOYEES 3 // simply change this constant value to have as many number of employee records as you please ...

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

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
    // function prototypes
    void myGetString(char[], int);

    // variable declarations
    struct Employee employeeRecord_ra[NUM_EMPLOYEES]; // an array of <NUM_EMPLOYEES> struct - each being type 'struct employee'

    int i_ra;

    // code
    // ******* user input initialization of array of 'struct employee' ********
    for (i_ra = 0; i_ra < NUM_EMPLOYEES; i_ra++)
    {
        printf("\n\n\n\n");
        printf("******* Data entry for employee number %d *******\n", (i_ra + 1));

        printf("\n\n");
        printf("Enter employee name : ");
        myGetString(employeeRecord_ra[i_ra].name_ra, NAME_LENGTH);

        printf("\n\n");
        printf("Enter employee age (in years): ");
        scanf("%d", &employeeRecord_ra[i_ra].age_ra);

        printf("\n\n");
        printf("Enter employee sex (M/m for male, F/f for female): ");
        employeeRecord_ra[i_ra].sex_ra = getch();
        printf(" %c", employeeRecord_ra[i_ra].sex_ra);
        employeeRecord_ra[i_ra].sex_ra = toupper(employeeRecord_ra[i_ra].sex_ra);

        printf("\n\n");
        printf("Enter employee's salary (in indian rupees): ");
        scanf("%f", &employeeRecord_ra[i_ra].salary_ra);

        printf("\n\n");
        printf("Is the employee married? (Y/y for yes, N/n for no): ");
        employeeRecord_ra[i_ra].marital_status_ra = getch();
        printf("%c", employeeRecord_ra[i_ra].marital_status_ra);
        employeeRecord_ra[i_ra].marital_status_ra = toupper(employeeRecord_ra[i_ra].marital_status_ra);
    }

    // *** Display ***
    printf("\n\n\n\n");
    printf("******* Displaying employee records *******\n\n");
    for (i_ra = 0; i_ra < NUM_EMPLOYEES; i_ra++)
    {
        printf("****** Employee number %d ******\n\n", (i_ra + 1));
        printf("Name        : %s\n", employeeRecord_ra[i_ra].name_ra);
        printf("Age        : %d\n", employeeRecord_ra[i_ra].age_ra);

        if (employeeRecord_ra[i_ra].sex_ra == 'M')
        {
            printf("Sex        : Male\n");
        }
        else if (employeeRecord_ra[i_ra].sex_ra == 'F')
        {
            printf("Sex        : Female\n");
        }
        else
        {
            printf("Sex        : Invalid Data Entered\n");
        }

        printf("Salary          : Rs. %f\n", employeeRecord_ra[i_ra].salary_ra);

        if (employeeRecord_ra[i_ra].marital_status_ra == 'Y')
        {
            printf("Marital Status : Married\n");
        }
        else if (employeeRecord_ra[i_ra].marital_status_ra == 'N')
        {
            printf("Marital Status : Unmarried\n");
        }
        else
        {
            printf("Marital Status : Invalid Data Entered\n");
        }
        printf("\n\n");
    }

    return (0);
}

// *** Simple rudimentary implementation of gets_s() ***
// *** Implemented due to different behaviour of gets_s() / fgets() / fscanf() on different platforms ***
// *** Backspace / character deletion and arrow key cursor movement not implemented ***

void myGetString(char str_ra[], int str_size_ra)
{
    // variable declarations
    int i_ra;
    char ch_ra = '\0';

    // code
    i_ra = 0;
    do
    {
        ch_ra = getch();
        str_ra[i_ra] = ch_ra;
        printf("%c", str_ra[i_ra]);
        i_ra++;
    } while ((ch_ra != '\r') && (i_ra < str_size_ra));

    if (i_ra == str_size_ra)
    {
        str_ra[i_ra - 1] = '\0';
    }
    else
    {
        str_ra[i_ra] = '\0';
    }
}
