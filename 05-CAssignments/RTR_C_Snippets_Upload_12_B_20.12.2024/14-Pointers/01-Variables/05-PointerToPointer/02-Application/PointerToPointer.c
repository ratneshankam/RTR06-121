#include <stdio.h>

int main(void)
{
    // variable declarations
    int num_ra;
    int *ptr_ra = NULL;
    int **pptr_ra = NULL; // declaration method 1 :- **pptr is a variable of type 'int'

    // code
    num_ra = 10;

    printf("\n\n");

    printf(" ********** BEFORE ptr_ra = &num_ra ************\n\n");
    printf("Value of num_ra : %d\n", num_ra);
    printf("Address of num_ra : %p\n", &num_ra);
    printf("Value at address of 'num' : %d\n", *(&num_ra));

    // assigning address of variable 'num_ra' to pointer variable 'ptr_ra'
    // 'ptr_ra' now contains the address of 'num_ra' ... hence, 'ptr_ra' is SAME as '&num_ra'
    ptr_ra = &num_ra;

    printf("\n\n");

    printf(" ********** AFTER ptr_ra = &num_ra ************\n\n");
    printf("Value of num_ra : %d\n", num_ra);
    printf("Address of num_ra : %p\n", ptr_ra);
    printf("Value at address of 'num' : %d\n", *ptr_ra);

    // assigning address of variable 'ptr_ra' to pointer-to-pointer variable 'pptr_ra'
    // 'pptr_ra' now contains the address of 'ptr_ra' which in turn contains the address of 'num_ra'
    // hence, 'pptr_ra' is same as '&ptr_ra'
    // 'ptr_ra' is same as '&num_ra'
    // hence, pptr_ra = &ptr_ra = &(&num)
    // if ptr_ra = &num_ra and *ptr_ra = *(&num_ra) = value at address of 'num_ra'
    // then, pptr_ra = &ptr_ra and *pptr_ra = *(&ptr_ra) = ptr_ra = value at address of 'ptr_ra' i.e: 'ptr_ra' i.e: address of 'num_ra'
    // then, **pptr_ra = **(&ptr_ra) = *(*(&ptr_ra)) = *ptr_ra = *(&num_ra) = num_ra = 10
    // hence, num_ra = *(&num_ra) = *ptr_ra = *(*pptr_ra) = **pptr_ra

    pptr_ra = &ptr_ra;

    printf("\n\n");

    printf(" ********** AFTER pptr_ra = &ptr_ra ************\n\n");
    printf("Value of 'num_ra' : %d\n", num_ra);
    printf("Address of 'num_ra' : %p\n", ptr_ra);
    printf("Address of 'ptr_ra' : %p\n", pptr_ra);
    printf("Value at address of 'ptr_ra' : %p\n", *pptr_ra);
    printf("Value at address of 'num_ra' : %d\n", **pptr_ra);

    return (0);
}