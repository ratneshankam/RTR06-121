#include <stdio.h>

int main(void)
{
    // variable declarations
    int num_ra = 0;
    int *ptr_ra = NULL;
    int *copy_ptr_ra = NULL;

    // code
    num_ra = 5;
    ptr_ra = &num_ra;

    printf("\n\n");
    printf("******** Before copy_ptr_ra = ptr_ra ********\n");
    printf("  num_ra        = %d\n", num_ra);
    printf("  &num_ra       = %p\n", &num_ra);
    printf("  *(&num_ra)    = %d\n", *(&num_ra));
    printf("  ptr_ra        = %p\n", ptr_ra);
    printf("  *ptr_ra       = %d\n", *ptr_ra);

    // 'ptr_ra' is an integer pointer variable ... that it can hold the address of any integer variable only
    // 'copy_ptr' is another integer pointer variable
    // if ptr_ra = &num_ra ... 'ptr_ra' will contain address of integer variable 'num_ra'
    // if 'ptr_ra' is assigned to 'copy_ptr_ra', 'copy_ptr_ra' will also contain address of integer variable 'num_ra'
    // hence now, both 'ptr_ra' and 'copy_ptr_ra' will point to 'num_ra' ...

    copy_ptr_ra = ptr_ra; // = &num_ra

    printf("\n\n");
    printf("******* After copy_ptr_ra = ptr_ra *******\n");
    printf("  num_ra        = %d\n", num_ra);
    printf("  &num_ra       = %p\n", &num_ra);
    printf("  *(&num_ra)    = %d\n", *(&num_ra));
    printf("  ptr_ra        = %p\n", ptr_ra);
    printf("  *ptr_ra       = %d\n", *ptr_ra);
    printf("  copy_ptr_ra   = %p\n", copy_ptr_ra);
    printf("  *copy_ptr_ra  = %d\n", *copy_ptr_ra);

    return (0);
}