#include <stdio.h>

struct MyNumber
{
    int num_ra;
    int num_table_ra[10];
};

struct NumTables
{
    struct MyNumber a_ra;
    struct MyNumber b_ra;
    struct MyNumber c_ra;
};

int main(void)
{
    // variable declarations
    struct NumTables tables_ra;
    int i_ra;

    // code
    tables_ra.a_ra.num_ra = 2;
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        tables_ra.a_ra.num_table_ra[i_ra] = tables_ra.a_ra.num_ra * (i_ra + 1);
    }
    printf("\n\n");
    printf("Table of %d : \n\n", tables_ra.a_ra.num_ra);

    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("%d * %d = %d\n", tables_ra.a_ra.num_ra, (i_ra + 1), tables_ra.a_ra.num_table_ra[i_ra]);
    }

    tables_ra.b_ra.num_ra = 3;
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        tables_ra.b_ra.num_table_ra[i_ra] = tables_ra.b_ra.num_ra * (i_ra + 1);
    }
    printf("\n\n");
    printf("Table of %d : \n\n", tables_ra.b_ra.num_ra);

    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("%d * %d = %d\n", tables_ra.b_ra.num_ra, (i_ra + 1), tables_ra.b_ra.num_table_ra[i_ra]);
    }

    tables_ra.c_ra.num_ra = 4;
    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        tables_ra.c_ra.num_table_ra[i_ra] = tables_ra.c_ra.num_ra * (i_ra + 1);
    }
    printf("\n\n");
    printf("Table of %d : \n\n", tables_ra.c_ra.num_ra);

    for (i_ra = 0; i_ra < 10; i_ra++)
    {
        printf("%d * %d = %d\n", tables_ra.c_ra.num_ra, (i_ra + 1), tables_ra.c_ra.num_table_ra[i_ra]);
    }

    return (0);
}