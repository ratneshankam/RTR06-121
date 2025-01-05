#include <stdio.h>

int main(void)
{
    // variable declarations

    int a_ra, b_ra, p_ra, q_ra;
    char ch_result_01_ra, ch_result_02_ra;
    int i_result_01_ra, i_result_02_ra;

    // code
    printf("\n\n");

    a_ra = 7;
    b_ra = 5;

    ch_result_01_ra = (a_ra > b_ra) ? 'A' : 'B';
    i_result_01_ra = (a_ra > b_ra) ? a_ra : b_ra;

    printf("Ternary Operator Answer 1 ----- %c and %d.\n\n", ch_result_01_ra, i_result_01_ra);

    p_ra = 30;
    q_ra = 30;

    ch_result_02_ra = (p_ra != q_ra) ? 'P' : 'Q';
    i_result_02_ra = (p_ra != q_ra) ? p_ra : q_ra;

    printf("Ternary Operator Answer 2 ----- %c and %d.\n\n", ch_result_02_ra, i_result_02_ra);

    printf("\n\n");

    return (0);
}