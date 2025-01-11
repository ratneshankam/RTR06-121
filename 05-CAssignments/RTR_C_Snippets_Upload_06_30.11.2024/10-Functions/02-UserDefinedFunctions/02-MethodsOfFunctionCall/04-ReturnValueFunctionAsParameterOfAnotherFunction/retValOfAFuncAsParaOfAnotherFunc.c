#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    // function prototypes OR declarations
    int myAddition(int, int);

    // variable declarations
    int r_ra;
    int num_01_ra, num_02_ra, num_03_ra, num_04_ra;

    // code
    num_01_ra = 10;
    num_02_ra = 20;
    num_03_ra = 30;
    num_04_ra = 40;

    // return value of myAddition() is sent as parameter to another call to myAddition()
    r_ra = myAddition(myAddition(num_01_ra, num_02_ra), myAddition(num_03_ra, num_04_ra));

    printf("\n\n");

    printf("%d + %d + %d + %d = %d\n", num_01_ra, num_02_ra, num_03_ra, num_04_ra, r_ra);

    printf("\n\n");
    return (0);
}

// *** Function Definition Of myAddition() ***
int myAddition(int a_ra, int b_ra) {
    // variable declaration
    int sum_ra = 0;

    // code
    sum_ra = a_ra + b_ra;
    
    return (sum_ra);
}