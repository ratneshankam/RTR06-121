#include <stdio.h> // for printf()
#include <conio.h> // for getch()

int main(void)
{
    // variable declarations
    int a_ra, b_ra;
    int result_ra;

    char option_ra, option_division_ra;

    // code
    printf("\n\n");

    printf("Enter value for 'A'  ");
    scanf("%d", &a_ra);

    printf("Enter value for 'B'  ");
    scanf("%d", &b_ra);

    printf("Enter Option In Character  \n\n");
    printf("'A' or 'a' for addition  \n");
    printf("'S' or 's' for substraction  \n");
    printf("'M' or 'm' for multiplication  \n");
    printf("'D' or 'd' for division  \n");

    printf("Enter Option ");
    option_ra = getch();

    printf("\n\n");

    if (option_ra == 'A' || option_ra == 'a')
    {
        result_ra = a_ra + b_ra;
        printf("Addition of A = %d and B = %d gives result %d !!!\n\n", a_ra, b_ra, result_ra);
    }

    else if (option_ra == 'S' || option_ra == 's')
    {
        if (a_ra >= b_ra)
        {
            result_ra = a_ra - b_ra;
            printf("Substraction of B = %d from A = %d gives result %d !!!\n\n", b_ra, a_ra, result_ra);
        }
        else
        {
            result_ra = b_ra - a_ra;
            printf("Substraction of A = %d from B = %d gives result %d !!!\n\n", a_ra, b_ra, result_ra);
        }
    }

    else if (option_ra == 'M' || option_ra == 'm')
    {
        result_ra = a_ra * b_ra;
        printf("Multiplication of A = %d and B = %d gives result %d !!!\n\n", a_ra, b_ra, result_ra);
    }
    else if (option_ra == 'D' || option_ra == 'd')
    {
        printf("Enter Option In Character  \n\n");
        printf("'Q' or 'q' or '/' For Quotient Upon Division & 'R' or 'r' or '%%' For Remainder Upon Division\n\n");

        printf("Enter Option  ");
        option_division_ra = getch();

        printf("\n\n");

        if (option_division_ra == 'Q' || option_division_ra == 'q' || option_division_ra == '/')
        {
            if (a_ra >= b_ra)
            {
                result_ra = a_ra / b_ra;
                printf("Division of A = %d by B = %d gives Quotient %d !!!\n\n", a_ra, b_ra, result_ra);
            }
            else
            {
                result_ra = b_ra / a_ra;
                printf("Division of B = %d by A = %d gives Quotient %d !!!\n\n", b_ra, a_ra, result_ra);
            }
        }
        else if (option_ra == 'R' || option_ra == 'r' || option_ra == '%')
        {
            if (a_ra >= b_ra)
            {
                result_ra = a_ra % b_ra;
                printf("Division of A = %d by B = %d gives Remainder %d !!!\n\n", a_ra, b_ra, result_ra);
            }
            else
            {
                result_ra = b_ra % a_ra;
                printf("Division of B = %d by A = %d gives Remainder %d !!!\n\n", b_ra, a_ra, result_ra);
            }
        }
        else
        {
            printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", option_division_ra);
        }
    }
    else
    {
        printf("Invalid Character %c Entered !!! Please Try Again...\n\n", option_ra);
    }

    printf("If - Else If - Else Ladder Complete !!!\n\n");

    return (0);
}
