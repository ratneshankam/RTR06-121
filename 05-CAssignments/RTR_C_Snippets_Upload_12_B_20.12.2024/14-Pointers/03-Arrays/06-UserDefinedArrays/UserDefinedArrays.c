#include <stdio.h>
#include <stdlib.h>

#define INI_SIZE sizeof(int)
#define FLOAT_SIZE sizeof(float)
#define DOUBLE_SIZE sizeof(double)
#define CHAR_SIZE sizeof(char)

int main(void)
{
    // variable declarations
    int *ptr_iArray_ra = NULL;
    unsigned int intArrayLength_ra = 0;

    float *ptr_fArray_ra = NULL;
    unsigned int floatArrayLength_ra = 0;

    double *ptr_dArray_ra = NULL;
    unsigned int doubleArrayLength_ra = 0;

    char *ptr_cArray_ra = NULL;
    unsigned int charArrayLength_ra = 0;

    int i_ra;

    // code

    // ********** INTEGER ARRAY ***********
    printf("\n\n");
    printf("Enter the number of elements you want in the integer array : ");
    scanf("%u", &intArrayLength_ra);

    ptr_iArray_ra = (int *)malloc(INI_SIZE * intArrayLength_ra);
    if (ptr_iArray_ra == NULL)
    {
        printf("\n\n");
        printf("Memory allocation for integer array failed !!! exiting now ...\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("Memory allocation for integer array succeeded !!!\n\n");
    }

    printf("\n\n");
    printf("Enter the %d integer elements to fill up the integer array : \n\n", intArrayLength_ra);
    for (i_ra = 0; i_ra < intArrayLength_ra; i_ra++)
    {
        scanf("%d", (ptr_iArray_ra + i_ra));
    }

    // ********** FLOAT ARRAY ***********
    printf("\n\n");
    printf("Enter the number of elements you want in the 'float' array : ");
    scanf("%u", &floatArrayLength_ra);

    ptr_fArray_ra = (float *)malloc(FLOAT_SIZE * floatArrayLength_ra);
    if (ptr_fArray_ra == NULL)
    {
        printf("\n\n");
        printf("Memory allocation for floating-point array failed !!! exiting now ...\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("Memory allocation for floating-point array succeeded !!!\n\n");
    }

    printf("\n\n");
    printf("Enter the %d floating-point elements to fill up the 'float' array : \n\n", floatArrayLength_ra);
    for (i_ra = 0; i_ra < floatArrayLength_ra; i_ra++)
    {
        scanf("%f", (ptr_fArray_ra + i_ra));
    }

    // ********** DOUBLE ARRAY ***********
    printf("\n\n");
    printf("Enter the number of elements you want in the 'double' array : ");
    scanf("%u", &doubleArrayLength_ra);

    ptr_dArray_ra = (double *)malloc(DOUBLE_SIZE * doubleArrayLength_ra);
    if (ptr_dArray_ra == NULL)
    {
        printf("\n\n");
        printf("Memory allocation for double array failed !!! exiting now ...\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("Memory allocation for double array succeeded !!!\n\n");
    }

    printf("\n\n");
    printf("Enter the %d double elements to fill up the 'double' array : \n\n", doubleArrayLength_ra);
    for (i_ra = 0; i_ra < doubleArrayLength_ra; i_ra++)
    {
        scanf("%lf", (ptr_dArray_ra + i_ra));
    }

    // ********** CHAR ARRAY ***********
    printf("\n\n");
    printf("Enter the number of elements you want in the 'character' array : ");
    scanf("%u", &charArrayLength_ra);

    ptr_cArray_ra = (char *)malloc(CHAR_SIZE * charArrayLength_ra);
    if (ptr_cArray_ra == NULL)
    {
        printf("\n\n");
        printf("Memory allocation for character array failed !!! exiting now ...\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("Memory allocation for character array succeeded !!!\n\n");
    }

    printf("\n\n");
    printf("Enter the %d character elements to fill up the 'character' array : \n\n", charArrayLength_ra);
    for (i_ra = 0; i_ra < charArrayLength_ra; i_ra++)
    {
        *(ptr_cArray_ra + i_ra) = getch();
        // scanf("%c\n", *(ptr_cArray_ra + i_ra));
    }

    // ********** DISPLAY OF ARRAYS ************

    // ********** Integer Array ***********
    printf("\n\n");
    printf("The integer array entered by you and consisting of %d elements is as follows : \n\n", intArrayLength_ra);
    for (i_ra = 0; i_ra < intArrayLength_ra; i_ra++)
    {
        printf("%d \t \t at address : %p\n", *(ptr_iArray_ra + i_ra), (ptr_iArray_ra + i_ra));
    }

    // ********** Float Array ***********
    printf("\n\n");
    printf("The float array entered by you and consisting of %d elements is as follows : \n\n", floatArrayLength_ra);
    for (i_ra = 0; i_ra < floatArrayLength_ra; i_ra++)
    {
        printf("%f \t \t at address : %p\n", *(ptr_fArray_ra + i_ra), (ptr_fArray_ra + i_ra));
    }

    // ********** Double Array ***********
    printf("\n\n");
    printf("The double array entered by you and consisting of %d elements is as follows : \n\n", doubleArrayLength_ra);
    for (i_ra = 0; i_ra < doubleArrayLength_ra; i_ra++)
    {
        printf("%f \t \t at address : %p\n", *(ptr_dArray_ra + i_ra), (ptr_dArray_ra + i_ra));
    }
    // ********** Character Array ***********
    printf("\n\n");
    printf("The character array entered by you and consisting of %d elements is as follows : \n\n", charArrayLength_ra);
    for (i_ra = 0; i_ra < charArrayLength_ra; i_ra++)
    {
        printf("%c \t \t at address : %p\n", *(ptr_cArray_ra + i_ra), (ptr_cArray_ra + i_ra));
    }

    // ********* Freeing Memory Occupied By Arrays (int reverse order of allocation) **********
    if (ptr_cArray_ra)
    {
        free(ptr_cArray_ra);
        ptr_cArray_ra = NULL;

        printf("\n\n");
        printf("Memory occupied by character array has been freed successfully !!!\n\n");
    }
    if (ptr_dArray_ra)
    {
        free(ptr_dArray_ra);
        ptr_dArray_ra = NULL;
        printf("\n\n");
        printf("Memory occupied by double array has been freed successfully !!!\n\n");
    }
    if (ptr_fArray_ra)
    {
        free(ptr_fArray_ra);
        ptr_fArray_ra = NULL;
        printf("\n\n");
        printf("Memory occupied by floating-point array has been freed successfully !!!\n\n");
    }
    if (ptr_iArray_ra)
    {
        free(ptr_iArray_ra);
        ptr_iArray_ra = NULL;
        printf("\n\n");
        printf("Memory occupied by integer array has been freed successfully !!!\n\n");
    }

    return (0);
}