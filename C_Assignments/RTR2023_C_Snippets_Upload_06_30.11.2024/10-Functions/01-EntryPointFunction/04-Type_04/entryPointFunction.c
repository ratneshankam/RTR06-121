#include <stdio.h> // 'stdio.h' contains declaration of printf()

// Entry point function => main() => valid return type (int) and 2 parameters (int argc, char *argv[])

int main(int argc, char *argv[])
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
    return (0);
}
