#include <stdio.h> // 'stdio.h' contains declaration of printf()

int main(int argc, char *argv[], char *envp[])
{

    // function prototype / declaration / signature
    int myAddition(void);

    // variable declarations : local variables to main()
    int result_ra;

    // code
    result_ra = myAddition(); // function call

    printf("\n\n");
    printf("Sum = %d\n\n", result_ra);
    return (0);
}

int myAddition(void) // function definition
{

    // variable declarations : local variables to myAddition()
    int a_ra, b_ra, sum_ra;

    // code
    printf("\n\n");
    printf("Enter integer value for 'A' : ");
    scanf("%d", &a_ra);

    printf("\n\n");
    printf("Enter integer value for 'B' : ");
    scanf("%d", &b_ra);

    sum_ra = a_ra + b_ra;

    return (sum_ra);
}
