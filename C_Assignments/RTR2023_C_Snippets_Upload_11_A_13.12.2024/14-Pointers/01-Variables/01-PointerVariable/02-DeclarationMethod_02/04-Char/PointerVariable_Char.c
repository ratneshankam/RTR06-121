#include <stdio.h>

int main(void)
{
    // variable declarations
    char ch_ra;
    char* ptr_ra = NULL; // Declaration method 2 : '*ptr_ra' is a variable of type 'char'

    // code
    ch_ra = 'A';

    printf("\n\n");

    printf("********* Before ptr_ra = &ch_ra *********\n");
    printf("Value of ch_ra            : %c\n", ch_ra);
    printf("Address of ch_ra          : %p\n", &ch_ra);
    printf("Value at address of ch_ra : %c\n", *(&ch_ra));

    // assigning address of variable 'ch_ra' to pointer variable 'ptr_ra'
    // 'ptr_ra' now contains address of variable 'ch_ra' ... hence, 'ptr_ra'  is SAME as '&ch_ra'

    ptr_ra = &ch_ra;

    printf("\n\n");

    printf("********* After ptr_ra = &ch_ra *********\n");
    printf("Value of ch_ra            : %c\n", ch_ra);
    printf("Address of ch_ra          : %p\n", ptr_ra);
    printf("Value at address of ch_ra : %c\n", *ptr_ra);

    return (0);
}