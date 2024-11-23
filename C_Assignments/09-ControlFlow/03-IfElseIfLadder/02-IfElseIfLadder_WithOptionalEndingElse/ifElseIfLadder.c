#include <stdio.h>

int main(void)
{

    // variable declarations
    int num_ra;

    // code
    printf("\n\n");

    printf("Enter value for 'num' : ");
    scanf("%d", &num_ra);

    if (num_ra < 0)
    {
        printf("Num = %d is less than 0 (NEGATIVE)\n", num_ra);
    }
    else if ((num_ra > 0) && (num_ra <= 100))
    {
        printf("Num = %d is between 0 and 100 !!!\n\n", num_ra);
    }
    else if ((num_ra > 100) && (num_ra <= 200))
    {
        printf("Num = %d is between 100 and 200 !!!\n\n", num_ra);
    }
    else if ((num_ra > 200) && (num_ra <= 300))
    {
        printf("Num = %d is between 200 and 300 !!!\n\n", num_ra);
    }
    else if ((num_ra > 300) && (num_ra <= 400))
    {
        printf("Num = %d is between 300 and 400 !!!\n\n", num_ra);
    }
    else if ((num_ra > 400) && (num_ra <= 500))
    {
        printf("Num = %d is between 400 and 500 !!!\n\n", num_ra);
    }
    else if (num_ra > 500)
    {
        printf("Num = %d is greater than 500 !!!\n\n", num_ra);
    }
    // *** This is terminating 'else' of this 'if-else if - else' ladder !!! ***
    else
    {
        printf("Invalid value entered !!!\n\n");
    }

    return (0);
}
