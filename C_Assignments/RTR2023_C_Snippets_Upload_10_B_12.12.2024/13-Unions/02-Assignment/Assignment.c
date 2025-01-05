#include <stdio.h>

struct MyUnion
{
    int i_ra;
    float f_ra;
    double d_ra;
    char c_ra;
};

int main(void)
{
    // variable declarations
    struct MyUnion u1_ra, u2_ra;

    // code
    // ***** MyUnion u1 *****
    printf("\n\n");
    printf("Members of union u1_ra are : \n");

    u1_ra.i_ra = 6;
    u1_ra.f_ra = 1.2f;
    u1_ra.d_ra = 8.333333;
    u1_ra.c_ra = 'S';
    printf("u1_ra.i_ra = %d\n", u1_ra.i_ra);
    printf("u1_ra.f_ra = %f\n", u1_ra.f_ra);
    printf("u1_ra.d_ra = %f\n", u1_ra.d_ra);
    printf("u1_ra.c_ra = %c\n", u1_ra.c_ra);

    printf("Addresses of members of union u1 are : \n\n");
    printf("u1_ra.i_ra = %p\n\n", &u1_ra.i_ra);
    printf("u1_ra.f_ra = %p\n\n", &u1_ra.f_ra);
    printf("u1_ra.d_ra = %p\n\n", &u1_ra.d_ra);
    printf("u1_ra.c_ra = %p\n\n", &u1_ra.c_ra);

    printf("MyUnion u1_ra = %p\n\n", &u1_ra);

    // ***** MyUnion u2 *****
    printf("\n\n");
    printf("Members of union u2_ra are : \n");

    u2_ra.i_ra = 3;
    printf("u2_ra.i_ra = %d\n\n", u2_ra.i_ra);
    u2_ra.f_ra = 4.5f;
    printf("u2_ra.f_ra = %f\n\n", u2_ra.f_ra);
    u2_ra.d_ra = 5.12343;
    printf("u2_ra.d_ra = %f\n\n", u2_ra.d_ra);
    u2_ra.c_ra = 'A';
    printf("u2_ra.c_ra = %c\n\n", u2_ra.c_ra);

    printf("Addresses of members of union u2_ra are : \n\n");
    printf("u2_ra.i_ra = %p\n\n", &u2_ra.i_ra);
    printf("u2_ra.f_ra = %p\n\n", &u2_ra.f_ra);
    printf("u2_ra.d_ra = %p\n\n", &u2_ra.d_ra);
    printf("u2_ra.c_ra = %p\n\n", &u2_ra.c_ra);

    printf("MyUnion u2_ra = %p\n\n", &u2_ra);
    
    return (0);
}
