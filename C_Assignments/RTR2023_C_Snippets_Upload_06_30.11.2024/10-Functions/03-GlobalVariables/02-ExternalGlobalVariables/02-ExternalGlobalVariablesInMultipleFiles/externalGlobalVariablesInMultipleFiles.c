#include <stdio.h>
#include "file_01.c"
#include "file_02.c"

// *** Global Scope ***
int global_count_ra = 0;

int main(void)
{
    // function prototypes
    void change_count(void);
    void change_count_one(void);    // function defines in file_01.c
    void change_count_two(void);    // function defines in file_02.c

    // code
    printf("\n");

    change_count();
    change_count_one(); // function defines in file_01.c
    change_count_two(); // function defines in file_02.c

    return (0);
}

void change_count(void)
{
    // code
    global_count_ra += 1;
    printf("Global Count = %d\n", global_count_ra);
}