#include <stdio.h>
#include <conio.h>

// Defining Struct
struct MyData
{
    int i_ra;
    float f_ra;
    double d_ra;
    char ch_ra;
};

int main(void)
{
    // variable declarations
    struct MyData data; // declaring a single struct variable

    // code
    // User input for values of data members of 'struct MyData'
    printf("\n\n");

    printf("Enter integer value for data member 'i_ra' of 'struct MyData' : \n");
    scanf("%d", &data.i_ra);

    printf("Enter floating-point value for data member 'f_ra' of 'struct MyData' : \n");
    scanf("%f", &data.f_ra);

    printf("Enter double value for data member 'd_ra' of 'struct MyData' : \n");
    scanf("%lf", &data.d_ra);

    printf("Enter character value for data member 'c_ra' of 'struct MyData' : \n");
    data.ch_ra = getch();
    
    // displaying values of the data members of 'struct MyData'
    printf("\n\n");
    printf("Data members of 'struct MyData' are : \n\n");
    printf("i = %d\n", data.i_ra);
    printf("f = %f\n", data.f_ra);
    printf("d = %lf\n", data.d_ra);
    printf("c = %c\n\n", data.ch_ra);

    return (0);
}