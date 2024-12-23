#include <stdio.h>

#define MAX_NUMBER(a_ra, b_ra) ((a_ra > b_ra) ? a_ra : b_ra)

int main(int argc, char *argv[], char *envp[]) {
    // variable declarations
    int iNum_01_ra = 0;
    int iNum_02_ra = 0;
    int iResult_ra = 0;

    float fNum_01_ra = 0.0f;
    float fNum_02_ra = 0.0f;
    float fResult_ra = 0.0f;

    // code
    // ******* comparing integer values *******

    printf("\n\n");
    printf("Enter an integer number : \n");
    scanf("%d", &iNum_01_ra);

    printf("\n\n");
    printf("Enter another integer number : \n");
    scanf("%d", &iNum_02_ra);

    iResult_ra = MAX_NUMBER(iNum_01_ra, iNum_02_ra);
    printf("\n\n");
    printf("Result of macro function MAX_NUMBER() = %d\n", iResult_ra);

    printf("\n\n");
    printf("Enter a floating point number : \n");
    scanf("%f", &fNum_01_ra);

    printf("\n\n");
    printf("Enter another floating point number : \n");
    scanf("%f", &fNum_02_ra);

    fResult_ra = MAX_NUMBER(fNum_01_ra, fNum_02_ra);
    printf("\n\n");
    printf("Result of macro function MAX_NUMBER() = %f\n", fResult_ra);

    printf("\n\n");

    return (0);
}