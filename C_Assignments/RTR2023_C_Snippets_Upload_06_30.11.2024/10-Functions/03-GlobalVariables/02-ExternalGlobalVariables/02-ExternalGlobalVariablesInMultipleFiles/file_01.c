// *** Global Scope ***

// global_count is a global variable declared in source code file externalGlobalVariablesInMultipleFiles.c

// To access it in this file, it must first be re-declared as an external variable in the global scope of this file along with the 'extern' keyword and its proper data type

// Then, it can be used as any ordinary global variable throughout this file as well

#include <stdio.h>

extern int global_count_ra;

void change_count_one(void)
{
    // code
    global_count_ra += 1;
    printf("global_count_one() : value of global_count_ra in file_01 = %d\n", global_count_ra);
}