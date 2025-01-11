#include <stdio.h>

// *** Global Scope ***

int main(void)
{
    // function prototypes
    void change_count(void);

    // variables declaration
    extern int global_count_ra;

    // code

    printf("\n");

    printf("value of global_count_ra before change_count() = %d\n", global_count_ra);

    change_count();

    printf("value of global_count_ra after change_count() = %d\n", global_count_ra);

    printf("\n");

    return (0);
}

// *** Global Scope ***
// global_count_ra is a global variable.
// Since, it is declared before change_count(), it can be accessed and used as any ordinary global variable in change_count()
// Since, it is declared after main(), it must be first re-declared in main() as an external global variable by means of the 'extern' keyword and the type of the variable.
// Once this is done, it can be used as an ordinary global variable in main as well.

int global_count_ra = 0;

void change_count(void)
{
    // code
    global_count_ra = 5;
    printf("value of global_count_ra in change_count() = %d\n", global_count_ra);
}