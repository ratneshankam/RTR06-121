#include <stdio.h>

int main(void)
{
    // function declarations
    int addIntegers(int, int);
    int subtractIntegers(int, int);
    float addFloats(float, float);

    // variable declarations
    typedef int (*AddIntsFnPtr)(int, int);
    AddIntsFnPtr ptrAddTwoIntegers_ra = NULL;
    AddIntsFnPtr ptrFunc_ra = NULL;

    typedef float (*AddFloatsFnPtr)(float, float);
    AddFloatsFnPtr ptrAddTwoFloats_ra = NULL;

    int iAnswer_ra = 0;
    float fAnswer_ra = 0.0f;

    // code
    ptrAddTwoIntegers_ra = addIntegers;
    iAnswer_ra = ptrAddTwoIntegers_ra(9, 30);
    printf("\n\n");
    printf("Sum of integers = %d\n", iAnswer_ra);

    ptrFunc_ra = subtractIntegers;
    iAnswer_ra = ptrFunc_ra(9, 30);
    printf("\n\n");
    printf("Substration of integers = %d\n", iAnswer_ra);

    ptrAddTwoFloats_ra = addFloats;
    fAnswer_ra = ptrAddTwoFloats_ra(11.45f, 8.2f);
    printf("\n\n");
    printf("Addition of floating-point numbers = %f\n", fAnswer_ra);

    return (0);
}

int addIntegers(int a_ra, int b_ra)
{
    // variable declarations
    int c_ra;

    // code
    c_ra = a_ra + b_ra;

    return (c_ra);
}

int subtractIntegers(int a_ra, int b_ra)
{
    // variable declarations
    int c_ra;

    // code
    if (a_ra > b_ra)
    {
        c_ra = a_ra - b_ra;
    }
    else
    {
        c_ra = b_ra - a_ra;
    }

    return (c_ra);
}

float addFloats(float f_num1_ra, float f_num2_ra)
{
    // variable declarations
    float ans_ra;

    // code
    ans_ra = f_num1_ra + f_num2_ra;

    return (ans_ra);
}
