#include <stdio.h>

struct MyStruct
{
    int i_ra;
    float f_ra;
    double d_ra;
    char c_ra;
};

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
    struct MyStruct s_ra;
    struct MyUnion u_ra;

    // code
    // code
    // ***** MyUnion u1 *****
    printf("\n\n");
    printf("Members of struct are : \n");

    s_ra.i_ra = 9;
    s_ra.f_ra = 8.7f;
    s_ra.d_ra = 1.23456;
    s_ra.c_ra = 'P';

    printf("s_ra.i_ra = %d\n\n", s_ra.i_ra);
    printf("s_ra.f_ra = %f\n\n", s_ra.f_ra);
    printf("s_ra.d_ra = %f\n\n", s_ra.d_ra);
    printf("s_ra.c_ra = %c\n\n", s_ra.c_ra);

    printf("Addresses of members of struct are : \n");
    printf("s_ra.i_ra = %p\n", &s_ra.i_ra);
    printf("s_ra.f_ra = %p\n", &s_ra.f_ra);
    printf("s_ra.d_ra = %p\n", &s_ra.d_ra);
    printf("s_ra.c_ra = %p\n", &s_ra.c_ra);

    printf("MyStruct s_ra = %p\n\n", &s_ra);

    printf("\n\n");
    printf("Members of union are : \n");

    u_ra.i_ra = 3;
    printf("u_ra.i_ra = %d\n", u_ra.i_ra);
    u_ra.f_ra = 4.5f;
    printf("u_ra.f_ra = %f\n", u_ra.f_ra);
    u_ra.d_ra = 5.6789;
    printf("u_ra.d_ra = %f\n", u_ra.d_ra);
    u_ra.c_ra = 'A';
    printf("u_ra.c_ra = %c\n", u_ra.c_ra);

    printf("Addresses of members of union are : \n\n");
    printf("u_ra.i_ra = %p\n\n", &u_ra.i_ra);
    printf("u_ra.f_ra = %p\n\n", &u_ra.f_ra);
    printf("u_ra.d_ra = %p\n\n", &u_ra.d_ra);
    printf("u_ra.c_ra = %p\n\n", &u_ra.c_ra);

    printf("MyUnion u_ra = %p\n\n", &u_ra);
    
    return (0);
}
