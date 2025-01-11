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
    printf("\n\n");
    printf("Size of MyStruct = %zu\n", sizeof(s_ra));
    printf("\n\n");
    printf("Size of MyUnion = %zu\n", sizeof(u_ra));

    return (0);
}
