#include <stdio.h>

int main(void) {
    // variable declarations
    
    char chArray_01_ra[] = {'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0'}; // must give \0 explicitly for proper initialisation

    char chArray_02_ra[9] = {'W', 'E', 'L', 'C', 'O', 'M', 'E', '\0'}; // must give \0 explicitly for proper initialisation

    char chArray_03_ra[] = {'Y', 'O', 'U', '\0'}; // must give \0 explicitly for proper initialisation
    char chArray_04_ra[] = "To";                  // \0 is assumed, size is given as 3, although string has only 2 characters
    char chArray_05_ra[] = "REAL TIME RENDERING BATCH OF 2024-25"; // \0 is assumed, size is given as 40, although string has 39 characters

    char chArray_WithoutNullTerminator_ra[] = {'H', 'e', 'l', 'l', 'o'};

    // code
    printf("\n\n");

    printf("Size of chArray_01_ra = %lu\n\n", sizeof(chArray_01_ra));
    printf("Size of chArray_02_ra = %lu\n\n", sizeof(chArray_02_ra));
    printf("Size of chArray_03_ra = %lu\n\n", sizeof(chArray_03_ra));
    printf("Size of chArray_04_ra = %lu\n\n", sizeof(chArray_04_ra));
    printf("Size of chArray_05_ra = %lu\n\n", sizeof(chArray_05_ra));

    printf("\n\n");
    printf("Size of chArray_WithoutNullTerminator_ra : %lu\n\n", sizeof(chArray_WithoutNullTerminator_ra));
    printf("chArray_WithoutNullTerminator_ra : %s\n\n", chArray_WithoutNullTerminator_ra); // will display garbage value at the end of string due to absence