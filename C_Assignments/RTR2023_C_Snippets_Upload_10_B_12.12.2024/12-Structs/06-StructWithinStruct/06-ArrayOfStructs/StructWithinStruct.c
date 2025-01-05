#include <stdio.h>

struct MyNumber
{
    int num_ra;
    int num_table_ra[10];
};

struct NumTables
{
    struct MyNumber n_ra;
};

int main(void)
{
    // variable declarations
    struct NumTables tables_ra[10]; // an array of 10 'struct NumTables'
    int i_ra, j_ra;

    // code
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        tables_ra[i_ra].n_ra.num_ra = (i_ra + 1);
    }
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("\n\n");
        printf("Table of %d : \n\n", tables_ra[i_ra].n_ra.num_ra);
        for (j_ra = 0; j_ra < 10; j_ra++)
        {
            tables_ra[i_ra].n_ra.num_table_ra[j_ra] = tables_ra[i_ra].n_ra.num_ra * (j_ra + 1);
            printf("%d * %d = %d \n", tables_ra[i_ra].n_ra.num_ra, (j_ra + 1), tables_ra[i_ra].n_ra.num_table_ra[j_ra]);
        }
    }

    return (0);
}
