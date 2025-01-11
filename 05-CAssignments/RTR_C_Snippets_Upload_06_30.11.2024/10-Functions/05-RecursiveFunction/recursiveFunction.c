// recursiveFunction.c
//
// Created by AMC on 31/05/20

#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    // variable declarations
    unsigned int num_ra;

    // function prototypes
    void recursive(unsigned int);

    // code
    printf("\n\n");
    printf("Enter Any Number : \n");
    scanf("%u", &num_ra);

    printf("\n\n");
    printf("Output of recursive function : \n");

    recursive(num_ra);

    printf("\n\n");

    return (0);
}

void recursive(unsigned int n_ra)
{
    // code
    printf("n = %d\n", n_ra);

    if (n_ra > 0)
    {
        recursive(n_ra - 1);
    }
}