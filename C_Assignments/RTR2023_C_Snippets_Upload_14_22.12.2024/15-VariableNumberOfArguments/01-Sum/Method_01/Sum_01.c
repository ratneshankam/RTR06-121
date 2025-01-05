#include <stdio.h>
#include <stdarg.h>

int main(void)
{
    // function prototypes
    int calculateSum(int, ...);

    // variables declarations
    int answer_ra;

    // code
    printf("\n\n");

    answer_ra = calculateSum(5, 10, 20, 30, 40, 50);
    printf("Answer = %d\n", answer_ra);

    answer_ra = calculateSum(10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    printf("Answer = %d\n", answer_ra);

    answer_ra = calculateSum(0);
    printf("Answer = %d\n", answer_ra);
    
    return (0);
}

int calculateSum(int num_ra, ...) // variadic function
{
    // variable declarations
    int sum_total_ra = 0;
    int n_ra;

    va_list numbers_list_ra;

    // code
    va_start(numbers_list_ra, num_ra);

    while (num_ra)
    {
        n_ra = va_arg(numbers_list_ra, int);
        sum_total_ra += n_ra;
        num_ra--;
    }

    va_end(numbers_list_ra);
    return (sum_total_ra);
}