#include <stdio.h>

// *** GLOBAL SCOPE ***

int main(void)
{
    // *** LOCAL SCOPE OF main() begins ***

    // variable declarations
    // 'a_ra' is a local variable. It is local to main() only.
    int a_ra = 5;

    // function prototypes
    void change_count(void);

    // code
    printf("\n");
    printf("A = %d\n\n", a_ra);

    // local_count_ra is initializd to 0.
    // local_count_ra = local_count_ra + 1 = 0 + 1 = 1
    change_count();

    // Since, 'local_count_ra' is an local static variable of change_count(), it will retain its value from previous call to change_count().
    // So local_count_ra is 1
    // local_count_ra = local_count_ra + 1 = 1 + 1 = 2
    change_count();

    // Since, 'local_count_ra' is an local static variable of change_count(), it will retain its value from previous call to change_count().
    // So local_count_ra is 2
    // local_count_ra = local_count_ra + 1 = 2 + 1 = 3
    change_count();

    return (0);

    // *** Local Scope Of main() ends ***
}

// *** Global Scope ***

void change_count(void)
{
    // *** Local Scope Of change_count() begins ***

    // variable declarations
    // 'local_count_ra' is a local static variable, It is local to change_count() only.
    // It will retain its value between calls to change_count_ra() 
    static int local_count_ra = 0;

    // code
    local_count_ra = local_count_ra + 1;

    printf("Local Count = %d\n", local_count_ra);

    // *** Local scope of change_count() ends ***
}

// *** Global Scope ***