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

    printf("Enter value for 'A' : ");
    scanf("%d", &a_ra);

    printf("Enter value for 'B' : ");
    scanf("%d", &b_ra);

    printf("Enter Option In Character : \n\n");
    printf("'A' or 'a' for addition : \n");
    printf("'S' or 's' for substraction : \n");
    printf("'M' or 'm' for multiplication : \n");
    printf("'D' or 'd' for division : \n");

    printf("Enter Option ");
    option_ra = getch();

    printf("\n\n");

    switch (option_ra)
    {
    // Fall Through Condition for 'A' and 'a'
    case 'A':
    case 'a':
        result_ra = a_ra + b_ra;
        printf("Addition of A = %d and B = %d gives result %d !!!\n\n", a_ra, b_ra, result_ra);
        break;

    // Fall Through Condition for 'S' and 's'
    case 'S':
    case 's':
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
        break;

    // Fall Through Condi'M' and 'm'
    case 'M':
    case 'm':
        result_ra = a_ra * b_ra;
        printf("Multiplication of A = %d and B = %d gives result %d !!!\n\n", a_ra, b_ra, result_ra);
        break;

    // Fall Through Condi'D' and 'd'
    case 'D':
    case 'd':
        printf("Enter Option In Character : \n\n");
        printf("'Q' or 'q' or '/' For Quotient Upon Division : ");

        printf("Enter Option : ");
        option_division_ra = getch();

        printf("\n\n");

        switch (option_division_ra)
        {
        // Fall Through Condition for 'Q' and 'q' and '/'
        case 'Q':
        case 'q':
        case '/':
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
            break;

        // Fall Through Condition for 'R' and 'r' and '%'
        case 'R':
        case 'r':
        case '%':
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
            break;

        default:
            printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", option_division_ra);
            break;
        }

    default:
        printf("Invalid Character %c Entered !!! Please Try Again...\n\n", option_ra);
        break;
    }

    printf("Switch Case Block Complete !!!\n\n");

    return (0);
}