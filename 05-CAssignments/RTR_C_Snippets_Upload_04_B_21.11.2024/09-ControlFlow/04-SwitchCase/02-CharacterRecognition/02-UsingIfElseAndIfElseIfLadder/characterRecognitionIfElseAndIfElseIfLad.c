#include <stdio.h> // for printf()
#include <conio.h> // for getch()

// ASCII values for 'A' to 'Z' => 65 to 90
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

// ASCII values for 'a' to 'z' => 97 to 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

// ASCII values for '0' to '9' => 48 to 57
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
    // variable declarations
    char ch_ra;
    int ch_value_ra;

    // code
    printf("\n\n");

    printf("Enter character ");
    ch_ra = getch();

    printf("\n\n");

    if ((ch_ra == 'A' || ch_ra == 'a') ||
        (ch_ra == 'E' || ch_ra == 'e') ||
        (ch_ra == 'I' || ch_ra == 'i') ||
        (ch_ra == 'O' || ch_ra == 'o') ||
        (ch_ra == 'U' || ch_ra == 'u'))
    {
        printf("Character \'%c\' entered by you, is a vowel character from the english alphabet !!! \n\n", ch_ra);
    }
    else
    {
        ch_value_ra = (int)ch_ra;

        if ((ch_value_ra >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && ch_value_ra <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (ch_value_ra >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ch_value_ra <= CHAR_ALPHABET_LOWER_CASE_ENDING))
        {
            printf("Character \'%c\' entered by you, is a Consonant Character from the english alphabet !!! \n\n", ch_ra);
        }
        else if (ch_value_ra >= CHAR_DIGIT_BEGINNING && ch_value_ra <= CHAR_DIGIT_ENDING)
        {
            printf("Character \'%c\' entered by you, is a Digit Character !!! \n\n", ch_ra);
        }
        else
        {
            printf("Character \'%c\' entered by you, is a Special Character !!! \n\n", ch_ra);
        }
    }

    printf("\n\n");

    return (0);
}