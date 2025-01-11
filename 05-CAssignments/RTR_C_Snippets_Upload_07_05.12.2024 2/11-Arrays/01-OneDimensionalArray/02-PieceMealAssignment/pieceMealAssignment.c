#include <stdio.h>

int main(void)
{
    // variable declarations
    int iArrayOne_ra[10];
    int iArrayTwo_ra[10];

    // code

    // ****** iArrayOne_ra[] ******

    iArrayOne_ra[0] = 3;
    iArrayOne_ra[1] = 6;
    iArrayOne_ra[2] = 9;
    iArrayOne_ra[3] = 12;
    iArrayOne_ra[4] = 15;
    iArrayOne_ra[5] = 18;
    iArrayOne_ra[6] = 21;
    iArrayOne_ra[7] = 24;
    iArrayOne_ra[8] = 27;
    iArrayOne_ra[9] = 30;

    printf("\n\n");
    printf("piece-meal (Hard-coded) assignment and display of elements to array 'iArrayOne_ra[]' : \n\n");
    printf("1st element of array 'iArrayOne_ra[]' or element at 0th index of array 'iArrayOne_ra[]' = %d\n", iArrayOne_ra[0]);
    printf("2nd element of array 'iArrayOne_ra[]' or element at 1st index of array 'iArrayOne_ra[]' = %d\n", iArrayOne_ra[1]);
    printf("3rd element of array 'iArrayOne_ra[]' or element at 2nd index of array 'iArrayOne_ra[]' = %d\n", iArrayOne_ra[2]);
    printf("4th element of array 'iArrayOne_ra[]' or element at 3rd index of array 'iArrayOne_ra[]' = %d\n", iArrayOne_ra[3]);
    printf("5th element of array 'iArrayOne_ra[]' or element at 4th index of array 'iArrayOne_ra[]' = %d\n", iArrayOne_ra[4]);
    printf("6th element of array 'iArrayOne_ra[]' or element at 5th index of array 'iArrayOne_ra[]' = %d\n", iArrayOne_ra[5]);
    printf("7th element of array 'iArrayOne_ra[]' or element at 6th index of array 'iArrayOne_ra[]' = %d\n", iArrayOne_ra[6]);
    printf("8th element of array 'iArrayOne_ra[]' or element at 7th index of array 'iArrayOne_ra[]' = %d\n", iArrayOne_ra[7]);
    printf("9th element of array 'iArrayOne_ra[]' or element at 8th index of array 'iArrayOne_ra[]' = %d\n", iArrayOne_ra[8]);
    printf("10th element of array 'iArrayOne_ra[]' or element at 9th index of array 'iArrayOne_ra[]' = %d\n", iArrayOne_ra[9]);

    // ****** iArrayTwo_ra[] ******

    printf("\n\n");

    printf("Enter 1st element of array 'iArrayTwo_ra[]' : ");
    scanf("%d", &iArrayTwo_ra[0]);
    printf("Enter 2nd element of array 'iArrayTwo_ra[]' : ");
    scanf("%d", &iArrayTwo_ra[1]);
    printf("Enter 3rd element of array 'iArrayTwo_ra[]' : ");
    scanf("%d", &iArrayTwo_ra[2]);
    printf("Enter 4th element of array 'iArrayTwo_ra[]' : ");
    scanf("%d", &iArrayTwo_ra[3]);
    printf("Enter 5th element of array 'iArrayTwo_ra[]' : ");
    scanf("%d", &iArrayTwo_ra[4]);
    printf("Enter 6th element of array 'iArrayTwo_ra[]' : ");
    scanf("%d", &iArrayTwo_ra[5]);
    printf("Enter 7th element of array 'iArrayTwo_ra[]' : ");
    scanf("%d", &iArrayTwo_ra[6]);
    printf("Enter 8th element of array 'iArrayTwo_ra[]' : ");
    scanf("%d", &iArrayTwo_ra[7]);
    printf("Enter 9th element of array 'iArrayTwo_ra[]' : ");
    scanf("%d", &iArrayTwo_ra[8]);
    printf("Enter 10th element of array 'iArrayTwo_ra[]' : ");
    scanf("%d", &iArrayTwo_ra[9]);

    printf("\n\n");
    printf("piece-meal (User Input) assignment and display of elements to array 'iArrayTwo_ra[]' : \n\n");
    printf("1st element of array 'iArrayTwo_ra[]' or element at 0th index of array 'iArrayTwo_ra[]' = %d\n", iArrayTwo_ra[0]);
    printf("2nd element of array 'iArrayTwo_ra[]' or element at 1st index of array 'iArrayTwo_ra[]' = %d\n", iArrayTwo_ra[1]);
    printf("3rd element of array 'iArrayTwo_ra[]' or element at 2nd index of array 'iArrayTwo_ra[]' = %d\n", iArrayTwo_ra[2]);
    printf("4th element of array 'iArrayTwo_ra[]' or element at 3rd index of array 'iArrayTwo_ra[]' = %d\n", iArrayTwo_ra[3]);
    printf("5th element of array 'iArrayTwo_ra[]' or element at 4th index of array 'iArrayTwo_ra[]' = %d\n", iArrayTwo_ra[4]);
    printf("6th element of array 'iArrayTwo_ra[]' or element at 5th index of array 'iArrayTwo_ra[]' = %d\n", iArrayTwo_ra[5]);
    printf("7th element of array 'iArrayTwo_ra[]' or element at 6th index of array 'iArrayTwo_ra[]' = %d\n", iArrayTwo_ra[6]);
    printf("8th element of array 'iArrayTwo_ra[]' or element at 7th index of array 'iArrayTwo_ra[]' = %d\n", iArrayTwo_ra[7]);
    printf("9th element of array 'iArrayTwo_ra[]' or element at 8th index of array 'iArrayTwo_ra[]' = %d\n", iArrayTwo_ra[8]);
    printf("10th element of array 'iArrayTwo_ra[]' or element at 9th index of array 'iArrayTwo_ra[]' = %d\n", iArrayTwo_ra[9]);

    return (0);
}