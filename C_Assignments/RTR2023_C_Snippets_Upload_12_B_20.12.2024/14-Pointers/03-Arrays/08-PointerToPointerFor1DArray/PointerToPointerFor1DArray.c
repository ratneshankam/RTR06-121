#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void MyAlloc(int **ptr, unsigned int numberOfElements);

    // variable declarations
    int *piArray_ra = NULL;
    unsigned int num_elements_ra = 0;
    int i_ra = 0;

    // code
    printf("\n\n");
    printf("How many elements you want in integer array ?\n\n");
    scanf("%u", &num_elements_ra);

    printf("\n\n");
    MyAlloc(&piArray_ra, num_elements_ra);

    printf("Enter %u elements to fill up your integer array : \n\n", num_elements_ra);
    for (i_ra = 0; i_ra < num_elements_ra; i_ra++)
    {
        scanf("%d", &piArray_ra[i_ra]);
    }

    printf("\n\n");
    printf("The %u elements entered by you in the integer array : \n\n", num_elements_ra);
    for (i_ra = 0; i_ra < num_elements_ra; i_ra++)
    {
        printf("%u\n", piArray_ra[i_ra]);
    }

    printf("\n\n");
    if (piArray_ra)
    {
        free(piArray_ra);
        piArray_ra = NULL;
        printf("Memory allocated has now been successfully freed !!!\n\n");
    }

    return (0);
}

void MyAlloc(int **ptr_ra, unsigned int numOfElements_ra)
{
    // code
    *ptr_ra = (int *)malloc(numOfElements_ra * sizeof(int));
    if (*ptr_ra == NULL)
    {
        printf("Could not allocate memory!!! Exitting now ...\n\n");
        exit(0);
    }
    printf("MyAlloc() has successfully allocated %zu bytes for integer array !!!\n", (numOfElements_ra * sizeof(int)));
}