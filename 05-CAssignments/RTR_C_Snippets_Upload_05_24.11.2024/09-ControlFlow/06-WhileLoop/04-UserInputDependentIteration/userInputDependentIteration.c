#include <stdio.h>

int main(void)
{
    // variable declarations
    int i_num_ra, num_ra, i_ra;

    // code
    printf("\n\n");

    printf("Enter An Integer Value  From Which Iteration Must Begin : ");
    scanf("%d\n", &i_num_ra);

    printf("How many digits do you want to print from %d to Onwards ? : ", i_num_ra);
    scanf("%d\n", &num_ra);

    printf("Printing Digits %d to %d : \n\n", i_num_ra, (i_num_ra + num_ra));

    i_ra = i_num_ra;
    while (i_ra <= (i_num_ra + num_ra))
    {
        printf("\t%d\n", i_ra);
        i_ra++;
    }

    printf("\n\n");

    return (0);
}