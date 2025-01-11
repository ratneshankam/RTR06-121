#include <stdio.h>  // 'stdio.h' contains declaration of printf()
#include <stdlib.h> // 'stdlib.h' contains declaration of exit()

int main(int argc, char *argv[], char *envp[])
{
    // variable declarations
    int i_ra;

    // code
    if (argc != 4)
    {
        printf("\n\n");
        printf("\n\n");
        printf("Invalid Usage !!! Exiting Now ... \n\n");
        printf("Usage: CommandLineArgumentApplication <first name> <middle name> <surname> \n\n");
        exit(0);
    }

    printf("\n\n");
    printf("Your Full Name Is : ");
    for (i_ra = 1; i_ra < argc; i_ra++)
    {
        printf("%s ", argv[i_ra]);
    }

    printf("\n\n");

    return (0);
}
