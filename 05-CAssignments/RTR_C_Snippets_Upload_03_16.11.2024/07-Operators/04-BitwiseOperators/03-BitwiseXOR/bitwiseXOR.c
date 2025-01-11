#include <stdio.h>

int main(void)
{
    // Function prototypes
    void PrintBinaryFormOfNumber(unsigned int);

    // variable declarations
    unsigned int a_ra;
    unsigned int b_ra;
    unsigned int result_ra;

    // code
    printf("\n\n");
    printf("Enter An Integer = ");
    scanf("%u", &a_ra);

    printf("\n\n");
    printf("Enter Another Integer = ");
    scanf("%u", &b_ra);

    printf("\n\n\n\n");
    result_ra = a_ra ^ b_ra;
    printf("Bitwise XOR-ing of \nA = %d (Decimal) and B = %d (Decimal) gives result %d (Decimal). \n", a_ra, b_ra, result_ra);

    PrintBinaryFormOfNumber(a_ra);
    PrintBinaryFormOfNumber(b_ra);
    PrintBinaryFormOfNumber(result_ra);

    return (0);
}

void PrintBinaryFormOfNumber(unsigned int decimal_number_ra)
{
    // variable declarations
    unsigned int quotient_ra, remainder_ra;
    unsigned int num_ra;
    unsigned int binary_array_ra[8];
    int i;

    // code
    for (i = 0; i < 8; i++)
    {
        binary_array_ra[i] = 0;
    }

    printf("The Binary Form of The Decimal Integer %d Is\t=\t", decimal_number_ra);
    num_ra = decimal_number_ra;
    i = 7;
    while (num_ra != 0)
    {
        quotient_ra = num_ra / 2;
        remainder_ra = num_ra % 2;
        binary_array_ra[i] = remainder_ra;
        num_ra = quotient_ra;
        i--;
    }

    for (i = 0; i < 8; i++)
    {
        printf("%u", binary_array_ra[i]);
    }

    printf("\n\n");
}