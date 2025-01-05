#include <stdio.h>
#include <stdarg.h>

#define NUM_TO_BE_FOUND 3
#define NUM_ELEMENTS 10

int main(void)
{
    // function prototypes
    void findNumber(int, int, ...);

    // variables declarations
    int answer_ra;

    // code
    printf("\n\n");

    findNumber(NUM_TO_BE_FOUND, NUM_ELEMENTS, 3, 5, 9, 2, 3, 6, 9, 3, 1, 3);

    return (0);
}

void findNumber(int num_to_be_found_ra, int num_ra, ...) // variadic function
{
    // variable declarations
    int count_ra = 0;
    int n_ra;
    va_list num_list_ra;

    // code
    va_start(num_list_ra, num_ra);

    while (num_ra)
    {
        n_ra = va_arg(num_list_ra, int);
        if (n_ra == num_to_be_found_ra)
        {
            count_ra++;
        }
        num_ra--;
    }

    if (count_ra == 0)
    {
        printf("Number %d could not be found !!!\n\n", num_to_be_found_ra);
    }
    else
    {
        printf("Number %d found %d times !!!\n\n", num_to_be_found_ra, count_ra);
    }

    va_end(num_list_ra);
}