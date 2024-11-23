#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_ra, j_ra;
    char ch_01_ra, ch_02_ra;

    int a_ra, result_int;
    float f_ra, result_float;

    int i_explicit_ra;
    float f_explicit_ra;

    // code
    printf("\n\n");

    // INTERCONVERSION AND IMPLICIT TYPE-CASTING BETWEEN 'char' AND 'int' TYPES....
    i_ra = 70;
    ch_01_ra = i_ra;
    printf("I = %d\n", i_ra);
    printf("Character 1 (a_rafter ch_01_ra = i) = %c\n\n", ch_01_ra);

    ch_02_ra = 'Q';
    j_ra = ch_02_ra;
    printf("Character 2 = %C\n", ch_02_ra);
    printf("J (a_rafter j = ch_02_ra) = %d\n\n", j_ra);

    // IMPLICIT CONVERSION OF 'int' TO 'float'....
    a_ra = 5;
    f_ra = 7.8f;
    result_float = a_ra + f_ra;
    printf("Integer a = %d and floating-point number %f added gives floating-point sum = %f\n\n", a_ra, f_ra, result_float);

    result_int = a_ra + f_ra;
    printf("Integer a = %d and floating-point number %f added gives Integer sum = %d\n\n", a_ra, f_ra, result_int);

    // EXPLICIT TYPE-CASTING USING CAST OPERATOR...
    f_explicit_ra = 30.121995f;
    i_explicit_ra = (int)f_explicit_ra;
    printf("Floating point number which will be type casted explicitly = %f\n\n", f_explicit_ra);
    printf("Resultant Integer After Explicit Type Casting Of %f = %d\n\n", f_explicit_ra, i_explicit_ra);

    return (0);
}