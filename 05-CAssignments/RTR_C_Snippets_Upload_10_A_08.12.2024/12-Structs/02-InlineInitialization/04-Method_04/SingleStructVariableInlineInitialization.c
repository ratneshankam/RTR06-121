#include <stdio.h>

// Defining Struct
struct MyData
{
    int i_ra;
    float f_ra;
    double d_ra;
    char c_ra;
};

int main(void)
{
    // variable declarations

    // 35 will be assigned to 'i_ra' of 'data_one'
    // 3.9 will be assigned to 'f_ra' of 'data_one'
    // 1.23765 will be assigned to 'd_ra' of 'data_one'
    // 'A' will be assigned to 'c_ra' of 'data_one'
    struct MyData data_one = {35, 3.9f, 1.23765, 'A'}; // Inline initialization

    // 'P' will be assigned to 'i_ra' of 'data_two' ... but 'P' is a character (char) and 'i_ra' is an integer ... so 'P' is converted into it decimal integer ASCII representation value (80) and 80 is assigned to 'i_ra' of 'data_two'
    // 6.2 will be assigned to 'f_ra' of 'data_two'
    // 12.199523 will be assigned to 'd_ra' of 'data_two'
    // 68 will be assigned to 'c_ra' of 'data_two' ... but 68 is an integer (int) and 'c_ra' is a 'char' ... so 68 is considered as a decimal ASCII value and its corressponding character ('D') is assigned to 'c_ra' of 'data_two'
    struct MyData data_two = {'P', 6.2f, 12.199523, 68}; // Inline initialization

    // 36 will be assigned to 'i_ra' of 'data_three'
    // 'G' is 'char', but 'f_ra' of 'data_three' is 'float' ... hence, 'G' is converted to its decimal integer ASCII value (71) and this in turn is converted to 'float' (71.000000) and then it will be assigned to 'f_ra' of 'data_three'
    // 0.000000 will be assigned to 'd_ra' of 'data_three'
    // No characters will be assigned to 'c_ra' of 'data_three'
    struct MyData data_three = {36, 'G'}; // Inline initialization

    // 79 will be assigned to 'i_ra' of 'data_four'
    // 0.000000 will be assigned to 'f_ra' of 'data_four'
    // 0.000000 will be assigned to 'd_ra' of 'data_four'
    // No character will be assigned to 'c_ra' of 'data_four'
    struct MyData data_four = {79}; // Inline initialization

    // code
    // displaying values of the data members of 'struct MyData'
    printf("\n\n");
    printf("Data members of 'struct MyData data_one' are : \n\n");
    printf("i = %d\n", data_one.i_ra);
    printf("f = %f\n", data_one.f_ra);
    printf("d = %lf\n", data_one.d_ra);
    printf("c = %c\n\n", data_one.c_ra);

    printf("\n\n");
    printf("Data members of 'struct MyData data_two' are : \n\n");
    printf("i = %d\n", data_two.i_ra);
    printf("f = %f\n", data_two.f_ra);
    printf("d = %lf\n", data_two.d_ra);
    printf("c = %c\n\n", data_two.c_ra);

    printf("\n\n");
    printf("Data members of 'struct MyData data_three' are : \n\n");
    printf("i = %d\n", data_three.i_ra);
    printf("f = %f\n", data_three.f_ra);
    printf("d = %lf\n", data_three.d_ra);
    printf("c = %c\n\n", data_three.c_ra);

    printf("\n\n");
    printf("Data members of 'struct MyData data_four' are : \n\n");
    printf("i = %d\n", data_four.i_ra);
    printf("f = %f\n", data_four.f_ra);
    printf("d = %lf\n", data_four.d_ra);
    printf("c = %c\n\n", data_four.c_ra);

    return (0);
}