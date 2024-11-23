#include <stdio.h>

int main(void)
{

    // variables declarations
    int a_ra, b_ra, c_ra, result_ra;

    // code
    printf("\n\n");
    printf("Enter First Number: ");
    scanf("%d", &a_ra);

    printf("\n\n");
    printf("Enter Second Number: ");
    scanf("%d", &b_ra);

    printf("\n\n");
    printf("Enter Third Number: ");
    scanf("%d", &c_ra);

    printf("\n\n");
    printf("If number 0, It is FALSE\n If number 1, It is TRUE\n");

    result_ra = (a_ra <= b_ra) && (b_ra != c_ra);
    printf("Either A = %d is less than or equal to B = %d OR B = %d is not equal to C = %d \t answer = %d\n\n", a_ra, b_ra, b_ra, c_ra, result_ra);

    result_ra = (b_ra >= a_ra) || (a_ra == c_ra);
    printf("Either B = %d is greater than or equal to A = %d OR A = %d is equal to C = %d \t answer = %d\n\n", b_ra, a_ra, a_ra, c_ra, result_ra);

    result_ra = !a_ra;
    printf("A = %d and using logical not (!) Operator on A gives result = %d\n\n", a_ra, result_ra);

    result_ra = !b_ra;
    printf("B = %d and using logical not (!) Operator on A gives result = %d\n\n", b_ra, result_ra);

    result_ra = !c_ra;
    printf("C = %d and using logical not (!) Operator on A gives result = %d\n\n", c_ra, result_ra);

    result_ra = (!(a_ra <= b_ra) && !(b_ra != c_ra));
    printf("Using logical NOT (!) on (a_ra <= b_ra) and also on (b != c_ra) and then AND-ing them afterwards gives Result = %d\n", result_ra);

    printf("\n\n");

    result_ra = !((b_ra >= a_ra) || (a_ra == c_ra));
    printf("Using logical NOT (!) on entire logical expression (b >= a) || (a_ra == c_ra) gives Result = %d\n", result_ra);

    printf("\n\n");

    return (0);
}