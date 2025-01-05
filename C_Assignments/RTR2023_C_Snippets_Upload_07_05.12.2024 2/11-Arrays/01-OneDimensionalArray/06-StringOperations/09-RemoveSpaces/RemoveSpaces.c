#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
  // function prototypes
  int myStrlen(char[]);

  // variable declarations
  char chArray_ra[MAX_STRING_LENGTH], chArray_SpacesRemoved_ra[MAX_STRING_LENGTH]; // A character array is a string
  int iStringLength_ra = 0;
  int i_ra = 0, j_ra = 0;

  // code

  // *** STRING INPUT ***
  printf("\n\n");
  printf("Enter a string : \n\n");
  gets_s(chArray_ra, MAX_STRING_LENGTH);

  iStringLength_ra = myStrlen(chArray_ra);

  for (i_ra = 0; i_ra < iStringLength_ra; i_ra++)
  {
    if (chArray_ra[i_ra] == ' ')
    {
      continue;
    }
    else
    {
      chArray_SpacesRemoved_ra[j_ra] = chArray_ra[i_ra];
      j_ra++;
    }
  }

  chArray_SpacesRemoved_ra[j_ra] = '\0';

  // *** STRING OUTPUT ***
  printf("\n\n");
  printf("string entered by you is : \n\n");
  printf("%s\n", chArray_ra);

  printf("\n\n");
  printf("String after removal of spaces is : \n\n");
  printf("%s\n", chArray_SpacesRemoved_ra);

  return (0);
}

int myStrlen(char str_ra[])
{
  // variable declarations
  int j_ra;
  int string_length_ra = 0;

  // code
  // *** Determining exact length of the string, by detecting the first occurence of null-terminating character (\0) ***
  for (j_ra = 0; j_ra < MAX_STRING_LENGTH; j_ra++)
  {
    if (str_ra[j_ra] == '\0')
    {
      break;
    }
    else
    {
      string_length_ra++;
    }
  }
  return (string_length_ra);
}