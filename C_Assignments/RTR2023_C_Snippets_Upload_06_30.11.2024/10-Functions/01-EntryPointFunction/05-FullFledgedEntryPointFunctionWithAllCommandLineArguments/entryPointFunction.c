#include <stdio.h> // 'stdio.h' contains declaration of printf()

// Entry point function => main() => valid return type (int) and 3 parameters (int argc, char *argv[], char *envp[])

int main(int argc, char *argv[], char *envp[])
{
    // variable declarations
    int i_ra;

    // code
    printf("\n\n");
    printf("Hello, world !!!\n\n"); // Library function

    printf("Number of command line arguments = %d\n\n", argc);

    printf("Command line arguments passed to this program are : \n\n");
    for (i_ra = 0; i_ra < argc; i_ra++)
    {
        printf("Command line argument number %d = %s\n", (i_ra + 1), argv[i_ra]);
    }
    printf("\n\n");

    printf("First 20 environmental variables passed to this program are : \n\n");
    for (i_ra = 0; i_ra < 20; i_ra++)
    {
        printf("Environmental variable number %d = %s\n", (i_ra + 1), envp[i_ra]);
    }
    printf("\n\n");

    return (0);
}
