#include <stdio.h>

int main(void)
{
    // variable declarations
    int age_ra;

    // code
    printf("\n\n");
    printf("Enter age: ");
    scanf("%d", &age_ra);

    if (age_ra >= 18)
    {
        printf("You are eligible for voting !!!\n\n");
    }

    return (0);
}