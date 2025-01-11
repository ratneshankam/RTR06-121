#include <stdio.h>
#include <stdlib.h> // contains prototypes of malloc() and free()

int main(void)
{
    // variables declarations
    int *ptr_iArray_ra = NULL; // it is good discipline to initialize any pointer with null address to prevent any garbage value getting into it, that way, it makes it easy to check for success or failure of memory allocation later on after on after malloc() ...

    unsigned int intArrayLength_ra = 0;
    int i_ra;

    // code
    printf("\n\n");
    printf("Enter the number of elements you want in your integer array : ");
    scanf("%d", &intArrayLength_ra);

    // ******* allocating as much memory required to the integer array *******
    // ******* memory required for integer array = size in bytes of one integer * number of integers to be stored in array ********
    // ******* to allocate said amount of memory, function malloc() will be used *******
    // ******* malloc() will allocate said amount of memory and will return the initial / staring / base address of the allocated memory, which must be captured in a pointer variable *********
    // ******** using this base address, the integer array can be accessed and used ********

    ptr_iArray_ra = (int *)malloc(sizeof(int) * intArrayLength_ra);
    if (ptr_iArray_ra == NULL) // If ptr_iArray_ra is still NULL, even after call to malloc(), it means malloc() has failed to allocate memory and no address has been returned by malloc() in ptr_iArray_ra ...
    {
        printf("\n\n");
        printf("Memory allocation for intger array has failed !!! Exitting now ...\n");
        exit(0);
    }
    else // If ptr_iArray_ra is not NULL, it means it must contain a valid address which is returned by malloc(), hence, malloc() has succeeded in memory allocation...
    {
        printf("\n\n");
        printf("Memory allocation for integer array has succeeded !!!\n");
        printf("Memory addresses from %p to %p have been allocated to integer array !!!\n\n", ptr_iArray_ra, (ptr_iArray_ra + (intArrayLength_ra - 1)));
    }

    printf("\n\n");
    printf("Enter %d elements for the integer array : \n", intArrayLength_ra);
    for (i_ra = 0; i_ra < intArrayLength_ra; i_ra++)
    {
        scanf("%d", (ptr_iArray_ra + i_ra));
    }

    printf("\n\n");
    printf("The integer array entered by you, consisting of %d elements : \n", intArrayLength_ra);
    for (i_ra = 0; i_ra < intArrayLength_ra; i_ra++)
    {
        printf("ptr_iArray_ra[%d] = %d \t \t at address &ptr_iArray_ra[%d] : %p\n", i_ra, ptr_iArray_ra[i_ra], i_ra, &ptr_iArray_ra[i_ra]);
    }

    printf("\n\n");
    for ( i_ra = 0; i_ra < intArrayLength_ra; i_ra++)
    {
        printf("*(ptr_iArray_ra + %d) = %d \t \t at address (ptr_iArray_ra + %d) : %p\n", i_ra, *(ptr_iArray_ra + i_ra), i_ra, (ptr_iArray_ra + i_ra));
    }

    // ******** Checking if memory is still allocated by checking validy of base address 'ptr_iArray_ra' *********
    // ******** If address is valid, tha is if 'ptr_iArray_ra' exists, that is, if it is not null, memory is still allocated ********
    // ******** In that case, the allocated memory must be freed ********
    // ******** Memory is allocated using malloc() and freed using free() ********
    // ********* Once memory is freed using free(), the base address must be cleaned, that is, it must be re-initialized to 'NULL' to keep away garbage values. This is not compusory, but it is good coding discipline *********

    if (ptr_iArray_ra)
    {
        free(ptr_iArray_ra);
        ptr_iArray_ra = NULL;

        printf("\n\n");
        printf("Memory allocated for integer array has been successfully freed !!!\n");
    }

    return (0);
}