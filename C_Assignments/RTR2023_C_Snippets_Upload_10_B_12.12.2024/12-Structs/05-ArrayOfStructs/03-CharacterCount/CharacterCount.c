#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_STRING_LENGTH 1024

struct CharacterCount
{
    char ch_ra;
    int ch_count_ra;
} character_and_count_ra[] = {{'A', 0}, // character_and_count_ra[0].ch_ra = 'A' & character_and_count[0].ch_count_ra = 0
                              {'B', 0}, // character_and_count_ra[1].ch_ra = 'B' & character_and_count[1].ch_count_ra = 0
                              {'C', 0},
                              {'D', 0},
                              {'E', 0},
                              {'F', 0},
                              {'G', 0},
                              {'H', 0},
                              {'I', 0},
                              {'J', 0},
                              {'K', 0},
                              {'L', 0},
                              {'M', 0},
                              {'N', 0},
                              {'O', 0},
                              {'P', 0},
                              {'Q', 0},
                              {'R', 0},
                              {'S', 0},
                              {'T', 0},
                              {'U', 0},
                              {'V', 0},
                              {'W', 0},
                              {'X', 0},
                              {'Y', 0},
                              {'Z', 0}}; // character_and_count_ra[25].ch_ra = 'Z' & character_and_count[25].ch_count_ra = 0

#define SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS sizeof(character_and_count_ra)
#define SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS sizeof(character_and_count_ra[0])
#define NUM_ELEMENTS_IN_ARRAY (SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS / SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS)

// Entry point function
int main(void)
{
    // variable declarations
    char str_ra[MAX_STRING_LENGTH];
    int i_ra, j_ra, actual_string_length_ra = 0;

    // code
    printf("\n\n");
    printf("Enter a string : \n\n");
    gets_s(str_ra, MAX_STRING_LENGTH);

    actual_string_length_ra = strlen(str_ra);

    printf("\n\n");
    printf("The string you have entered is : \n\n");
    printf("%s\n\n", str_ra);

    for (i_ra = 0; i_ra < actual_string_length_ra; i_ra++)
    {
        for (j_ra = 0; j_ra < NUM_ELEMENTS_IN_ARRAY; j_ra++) // Run every character of the input string through the entire alphabet (A to Z)
        {
            str_ra[i_ra] = toupper(str_ra[i_ra]); // If input character is in lower case, turn it to upper case for comparison

            if (str_ra[i_ra] == character_and_count_ra[j_ra].ch_ra) // If character is present ...
            {
                character_and_count_ra[j_ra].ch_count_ra++; // Increment its count by 1 ...
            }
        }
    }

    printf("\n\n");
    printf("The number of occurences of all characters from the alphabet are as follows : \n");
    for (i_ra = 0; i_ra < NUM_ELEMENTS_IN_ARRAY; i_ra++)
    {
        printf("Character %c : %d\n", character_and_count_ra[i_ra].ch_ra, character_and_count_ra[i_ra].ch_count_ra);
    }

    printf("\n\n");

    return (0);
}