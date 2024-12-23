#include <stdio.h> // 'stdio.h' contains declaration of printf()

// *** USER DEFINED FUNCTIONS : METHOD OF CALLING FUNCTION 3 ***
// *** CALLING ONLY ONE FUNCTION DIRECTLY IN main(), REST OF THE FUNCTIONS TRACE CALL INDIRECTLY TO main() ***

int main(int argc, char *argv[], char *envp[])
{

    // function prototype
    void function_country(void);

    // code
    function_country(); // function call

    return (0);
}

void function_country(void) // function definition
{
    // function declaration
    void function_ofAMC(void);

    // code
    function_ofAMC();

    printf("\n\n");

    printf("I Live In India.");

    printf("\n\n");
}
void function_ofAMC(void) // function definition
{
    // function declaration
    void function_surname(void);

    // code
    printf("\n\n");

    printf("Of ASTROMEDICOMP");
}

void function_surname(void) // function definition
{
    // function declaration
    void function_middleName(void);

    // code
    printf("\n\n");

    printf("Ankam");
}

void function_middleName(void) // function definition
{
    // function declaration
    void function_firstName(void);
    // code
    printf("\n\n");

    printf("Kiran");
}

void function_firstName(void) // function definition
{
    // function declaration
    void function_is(void);

    // code
    printf("\n\n");

    printf("Ratnesh");
}

void function_is(void) // function definition
{
    // function declaration
    void function_name(void);

    // code
    printf("\n\n");

    printf("Is");
}

void function_name(void) // function definition
{
    // function declaration
    void function_my(void);

    // code
    printf("\n\n");

    printf("Name");
}

void function_my(void) // function definition
{
    // code
    printf("\n\n");

    printf("My");
}
