#include <stdio.h>

int main(void)
{
    // function declarations
    void mathematicalOperations(int, int, int *, int *, int *, int *, int *);

    // variable declarations
    int a_ra, b_ra;
    int answer_sum_ra;
    int answer_difference_ra;
    int answer_product_ra;
    int answer_quotient_ra;
    int answer_remainder_ra;

    // code
    printf("\n\n");
    printf("Enter value of 'A' : ");
    scanf("%d", &a_ra);
    printf("\n");
    printf("Enter value of 'B' : ");
    scanf("%d", &b_ra);

    // passing addresses to function ... function will fill them up with ... hence, they go into the function as address parameters and come out of the function filled with valid values
    // thus, (&answer_sum_ra, &answer_difference_ra, &answer_product_ra, &answer_quotient_ra, &answer_remainder_ra) are called 'out parameters' or 'parameterized return values' ... Return values of functions coming via parameters
    // Hence, although each function has only one return value, using he concept of 'parameterized return values' our function 'mathematicalOperations()' has given 5 return values !!!

    mathematicalOperations(a_ra, b_ra, &answer_sum_ra, &answer_difference_ra, &answer_product_ra, &answer_quotient_ra, &answer_remainder_ra);

    printf("\n\n");
    printf("***** Result *****");
    printf("Sum = %d\n\n", answer_sum_ra);
    printf("Difference = %d\n\n", answer_difference_ra);
    printf("Product = %d\n\n", answer_product_ra);
    printf("Quotient = %d\n\n", answer_quotient_ra);
    printf("Remainder = %d\n\n", answer_remainder_ra);

    return (0);
}

void mathematicalOperations(int x_ra, int y_ra,
                            int *sum_ra,
                            int *difference_ra,
                            int *product_ra,
                            int *quotient_ra,
                            int *remainder_ra)
{
    // code
    *sum_ra = x_ra + y_ra;  // value at address 'sum_ra' = (x_ra + y_ra)
    *difference_ra = x_ra - y_ra;  // value at address 'difference_ra' = (x_ra - y_ra)
    *product_ra = x_ra * y_ra;  // value at address 'product_ra' = (x_ra * y_ra)
    *quotient_ra = x_ra / y_ra;  // value at address 'quotient_ra' = (x_ra / y_ra)
    *remainder_ra = x_ra % y_ra;  // value at address 'remainder_ra' = (x_ra % y_ra)
}
