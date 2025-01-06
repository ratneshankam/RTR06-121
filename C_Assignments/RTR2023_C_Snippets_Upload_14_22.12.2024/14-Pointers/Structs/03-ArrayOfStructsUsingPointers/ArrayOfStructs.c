#include <stdio.h>
#include <ctype.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
    char name_ra[NAME_LENGTH];
    int age_ra;
    char sex_ra;
    float salary_ra;
    char marital_status_ra;
};

int main(void)
{
    // function prototypes
    void myGetString(char[], int);

    // variable declarations
    struct Employee *pEmployeeRecord_ra = NULL;
    int num_employees_ra, i_ra;

    // code
    printf("\n\n");
    printf("Enter Number of employees whose details you want to record : ");
    scanf("%d", &num_employees_ra);

    printf("\n\n");
    pEmployeeRecord_ra = (struct Employee *)malloc(num_employees_ra * sizeof(struct Employee));
    if (pEmployeeRecord_ra == NULL)
    {
        printf("Failed to allocated memory for %d employees !!! Exiting Now ...\n", num_employees_ra);
        exit(0);
    }
    else
    {
        printf("Successfully allocated memory for %d employees\n", num_employees_ra);
    }

    // ******* user input initialization of array of 'struct employee' ********
    for (i_ra = 0; i_ra < num_employees_ra; i_ra++)
    {
        printf("\n\n\n\n");
        printf("******* Data entry for employee number %d *******\n", (i_ra + 1));

        printf("\n\n");
        printf("Enter employee name : ");
        myGetString(pEmployeeRecord_ra[i_ra].name_ra, NAME_LENGTH);

        printf("\n\n");
        printf("Enter employee age (in years): ");
        scanf("%d", &pEmployeeRecord_ra[i_ra].age_ra);

        printf("\n\n");
        printf("Enter employee salary (in indian rupees): ");
        scanf("%f", &pEmployeeRecord_ra[i_ra].salary_ra);

        printf("\n\n");
        printf("Enter employee sex (M/m for male, F/f for female): ");
        pEmployeeRecord_ra[i_ra].sex_ra = getch();
        printf(" %c", &pEmployeeRecord_ra[i_ra].sex_ra);
        pEmployeeRecord_ra[i_ra].sex_ra = toupper(pEmployeeRecord_ra[i_ra].sex_ra);

        printf("\n\n");
        printf("Enter employee's salary (in indian rupees): ");
        scanf("%f", &pEmployeeRecord_ra[i_ra].salary_ra);

        printf("\n\n");
        printf("Is the employee married? (Y/y for yes, N/n for no): ");
        pEmployeeRecord_ra[i_ra].marital_status_ra = getch();
        printf("%c", pEmployeeRecord_ra[i_ra].marital_status_ra);
        pEmployeeRecord_ra[i_ra].marital_status_ra = toupper(pEmployeeRecord_ra[i_ra].marital_status_ra);
    }

    // *** Display ***
    printf("\n\n\n\n");
    printf("******* Displaying employee records *******\n\n");
    for (i_ra = 0; i_ra < num_employees_ra; i_ra++)
    {
        printf("****** Employee number %d ******\n\n", (i_ra + 1));
        printf("Name        : %s\n", pEmployeeRecord_ra[i_ra].name_ra);
        printf("Age        : %s\n", pEmployeeRecord_ra[i_ra].age_ra);

        if (pEmployeeRecord_ra[i_ra].sex_ra == 'M')
        {
            printf("Sex        : Male\n");
        }
        else if (pEmployeeRecord_ra[i_ra].sex_ra == 'F')
        {
            printf("Sex        : Female\n");
        }
        else
        {
            printf("Sex        : Invalid Data Entered\n");
        }

        printf("Salary          : Rs. %f\n", pEmployeeRecord_ra[i_ra].salary_ra);

        if (pEmployeeRecord_ra[i_ra].marital_status_ra == 'Y')
        {
            printf("Marital Status : Married\n");
        }
        else if (pEmployeeRecord_ra[i_ra].marital_status_ra == 'N')
        {
            printf("Marital Status : Unmarried\n");
        }
        else
        {
            printf("Marital Status : Invalid Data Entered\n");
        }
        printf("\n\n");
    }

    if (pEmployeeRecord_ra)
    {
        free(pEmployeeRecord_ra);
        pEmployeeRecord_ra = NULL;
        printf("Memory allocated to %d employees has been successfully freed !!!\n", num_employees_ra);
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