#include <stdio.h>  // 'stdio.h' contains declaration of printf()
#include <ctype.h>  // 'ctype.h' contains declaration of atoi()
#include <stdlib.h> // 'stdlib.h' contains declaration of exit()

int main(int argc, char *argv[], char *envp[])
{
    // variable declarations
    int i_ra;
    int num_ra;
    int sum_ra = 0;

    // code
    if (argc == 1)
    {
        printf("\n\n");
        printf("No numbers given for addition !!! exiting now ...\n\n");
        exit(0);
    }

    // *** THIS PROGRAMS ADDS ALL COMMAN LINE ARGUMENTS GIVEN IN INTEGER FORM ONLY AND OUTPUTS THE SUM ***
    // *** DUE TO USEOF atoi(), ALL COMMAND LINE ARGUMENTS OF TYPES OTHER THAN 'int' ARE IGNORED ***

    printf("\n\n");
    printf("Sum of all integers command line arguments is : \n\n");
    // loop starts from i = 1 because, i = 0 will result in argv[i] = argv[0] which is the name of the program itself i.e 'commandlinearguments.exe'
    for (i_ra = 1; i_ra < argc; i_ra++)
    {
        num_ra = atoi(argv[i_ra]);
        sum_ra = sum_ra + num_ra;
    }

    printf("Sum = %d\n\n", sum_ra);

    return (0);
}
