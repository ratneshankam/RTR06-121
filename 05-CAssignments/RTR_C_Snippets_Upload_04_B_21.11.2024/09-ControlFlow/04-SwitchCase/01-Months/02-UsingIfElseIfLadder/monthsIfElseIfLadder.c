#include <stdio.h>

int main(void)
{
    // variable declarations
    int num_month_ra;

    // code
    printf("\n\n");

    printf("Enter Number of month (1 to 12) ) ");
    scanf("%d", &num_month_ra);

    printf("\n\n");

    // If - Else If - Else Ladder Begins From Here ...
    if (num_month_ra == 1)
        printf("Month number %d is JANUARY !!!\n\n", num_month_ra);

    else if (num_month_ra == 2)
        printf("Month number %d is FEBRUARY !!!\n\n", num_month_ra);

    else if (num_month_ra == 3)
        printf("Month number %d is MARCH !!!\n\n", num_month_ra);

    else if (num_month_ra == 4)
        printf("Month number %d is APRIL !!!\n\n", num_month_ra);

    else if (num_month_ra == 5)
        printf("Month number %d is MAY !!!\n\n", num_month_ra);

    else if (num_month_ra == 6)
        printf("Month number %d is JUNE !!!\n\n", num_month_ra);

    else if (num_month_ra == 7)
        printf("Month number %d is JULY !!!\n\n", num_month_ra);

    else if (num_month_ra == 8)
        printf("Month number %d is AUGUST !!!\n\n", num_month_ra);

    else if (num_month_ra == 9)
        printf("Month number %d is SEPTEMBER !!!\n\n", num_month_ra);

    else if (num_month_ra == 10)
        printf("Month number %d is OCTOBER !!!\n\n", num_month_ra);

    else if (num_month_ra == 11)
        printf("Month number %d is NOVEMBER !!!\n\n", num_month_ra);

    else if (num_month_ra == 12)
        printf("Month number %d is DECEMBER !!!\n\n", num_month_ra);

    else
        printf("Invalid Month Number %d Entered !!! Please Try Again...\n\n", num_month_ra);

    printf("If - Else If - Else Ladder Complete !!!\n\n");

    return (0);
}