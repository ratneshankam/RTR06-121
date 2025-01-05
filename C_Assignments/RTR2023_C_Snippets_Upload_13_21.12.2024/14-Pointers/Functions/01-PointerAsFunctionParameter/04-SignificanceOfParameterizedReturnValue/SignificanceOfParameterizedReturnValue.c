#include <stdio.h>

enum
{
    NEGATIVE = -1,
    ZERO,
    POSITIVE
};

int main(void)
{
    // function declarations
    int difference(int, int, int *);

    // variable declarations
    int a_ra, b_ra;
    int answer_ra, ret_ra;

    // code
    printf("\n\n");
    printf("Enter the value of 'A' : ");
    scanf("%d", &a_ra);
    printf("\n");
    printf("Enter the value of 'B' : ");
    scanf("%d", &b_ra);

    ret_ra = difference(a_ra, b_ra, &answer_ra);

    printf("\n\n");
    printf("The difference between %d and %d is %d\n", a_ra, b_ra, answer_ra);

    if (ret_ra == POSITIVE)
    {
        printf("The difference between %d and %d is positive!!\n", a_ra, b_ra);
    }
    else if (ret_ra == NEGATIVE)
    {
        printf("The difference between %d and %d is negative!!\n", a_ra,
               b_ra);
    }
    else
    {
        printf("The difference between %d and %d is zero!!\n", a_ra, b_ra);
    }

    return (0);
}

// We want our function difference() to perform 2 jobs ...
// One, is to subract the input number ('y_ra' from 'x_ra') and the second, is to tell whether the difference of 'x_ra' and 'y_ra' is positive or negative or zero ...
// But any function has only one valid return value, then how can we manage to return two values to the calling function?
// This is where parameterized return value comes into the picture ...
// We can return the actual difference of 'x_ra' and 'y_ra', that is, the actual answer value, via out-parameter / parameterized return value
// and we can return the status of the answer (positive / negative / zero) via the actual return value of the function ...

int difference(int x_ra, int y_ra, int *diff_ra)
{
    // code
    *diff_ra = x_ra - y_ra;
    if (*diff_ra > 0)
    {
        return (POSITIVE);
    }
    else if (*diff_ra < 0)
    {
        return (NEGATIVE);
    }
    else
    {
        return (ZERO);
    }
}
