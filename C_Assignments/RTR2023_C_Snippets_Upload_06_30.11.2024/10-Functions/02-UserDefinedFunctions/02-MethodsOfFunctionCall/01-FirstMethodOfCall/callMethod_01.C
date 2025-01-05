#include <stdio.h> // 'stdio.h' contains declaration of printf()

int main(int argc, char *argv[], char *envp[])
{

    // function prototype / declaration / signature
    int myAddition(int, int);

    // variable declarations : local variables to main()
    int a_ra, b_ra, result_ra;

    // code
    printf("\n\n");
    printf("Enter integer value for 'A' : ");
    scanf("%d", &a_ra);

    printf("\n\n");
    printf("Enter integer value for 'B' : ");
    scanf("%d", &b_ra);

    result_ra = myAddition(a_ra, b_ra); // function call
    printf("\n\n");
    printf("Sum of %d and %d is : %d", a_ra, b_ra, result_ra);
    printf("\n\n");
    
    return (0);
}

int myAddition(int a_ra, int b_ra) // function definition
{

    // variable declarations : local variables to myAddition()
    int sum_ra;

    // code
    sum_ra = a_ra + b_ra;
    return (sum_ra);
}
