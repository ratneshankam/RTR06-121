#include <stdio.h> // 'stdio.h' contains declaration of printf()

// *** USER DEFINED FUNCTIONS : METHOD OF CALLING FUNCTION 2 ***
// *** CALLING ONLY TWO FUNCTIONS DIRECTLY IN main(), REST OF THE FUNCTIONS TRACE CALL INDIRECTLY TO main() ***

int main(int argc, char *argv[], char *envp[])
{

   // function prototype
   void display_information(void);
   void function_country(void);

   // code
   display_information(); // function cll
   function_country();    // function call

   return (0);
}

// *** User Defined Functions Definitions... ***
void display_information(void)
{
   // function prototype
   void function_my(void);
   void function_name(void);
   void function_is(void);
   void function_firstName(void);
   void function_middleName(void);
   void function_surname(void);
   void function_ofAMC(void);

   // code

   // *** FUNCTION CALLS ***
   function_my();
   function_name();
   function_is();
   function_firstName();
   function_middleName();
   function_surname();
   function_ofAMC();
}

void function_my(void) // function definition
{
   // code
   printf("\n\n");

   printf("My");
}

void function_name(void) // function definition
{
   // code
   printf("\n\n");

   printf("Name");
}
void function_is(void) // function definition
{
   // code
   printf("\n\n");

   printf("Is");
}
void function_firstName(void) // function definition
{
   // code
   printf("\n\n");

   printf("Ratnesh");
}
void function_middleName(void) // function definition
{
   // code
   printf("\n\n");

   printf("Kiran");
}
void function_surname(void) // function definition
{
   // code
   printf("\n\n");

   printf("Ankam");
}
void function_ofAMC(void) // function definition
{
   // code
   printf("\n\n");

   printf("Of ASTROMEDICOMP");
}

void function_country(void) // function definition
{
   // code
   printf("\n\n");

   printf("I Live In India.");

   printf("\n\n");
}