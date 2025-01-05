#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    // function prototypes OR declarations
    int myAddition(int, int);

    // variable declarations
    int r_ra;
    int num_01_ra, num_02_ra;

    // code
    num_01_ra = 10;
    num_02_ra = 20;

    printf("\n\n");

    printf("%d + %d = %d\n", num_01_ra, num_02_ra, myAddition(num_01_ra, num_02_ra));

    printf("\n\n");
    return (0);
}

// *** Function Definition Of myAddition() ***
int myAddition(int a_ra, int b_ra)
{

    // function prototype
    int add(int, int);

    // code
    return (add(a_ra, b_ra)); // return value of function add() as return value of function myAddition()
}

int add(int x_ra, int y_ra)
{
    // code
    return (x_ra + y_ra);
}