#include <stdio.h> // 'stdio.h' contains declaration of printf()

int main(int argc, char *argv[], char *envp[])
{

    // function prototype / declaration / signature
    void myAddition(void);

    // code
    myAddition(); // function call
    return (0);
}

void myAddition(void) // function definition
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

    printf("\n\n");
    printf("Sum of %d and %d is : %d", a_ra, b_ra, sum_ra);
}
