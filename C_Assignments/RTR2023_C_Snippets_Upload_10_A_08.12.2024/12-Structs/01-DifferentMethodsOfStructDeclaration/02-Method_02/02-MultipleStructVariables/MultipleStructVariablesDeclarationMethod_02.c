#include <stdio.h>

// Defining struct ...
struct MyPoint
{
    int x_ra;
    int y_ra;
};

struct MyPoint point_A_ra, point_B_ra, point_C_ra, point_D_ra, point_E_ra; // Declaring 5 struct variables of type 'struct MyPoint' globally...

int main(void)
{
    // code
    // assigning data values to the data members of 'struct MyPoint' variable 'point_A'
    point_A_ra.x_ra = 3;
    point_A_ra.y_ra = 0;

    // assigning data values to the data members of 'struct MyPoint' variable 'point_B'
    point_B_ra.x_ra = 1;
    point_B_ra.y_ra = 2;

    // assigning data values to the data members of 'struct MyPoint' variable 'point_C'
    point_C_ra.x_ra = 9;
    point_C_ra.y_ra = 6;

    // assigning data values to the data members of 'struct MyPoint' variable 'point_D'
    point_D_ra.x_ra = 8;
    point_D_ra.y_ra = 2;

    // assigning data values to the data members of 'struct MyPoint' variable 'point_E'
    point_E_ra.x_ra = 11;
    point_E_ra.y_ra = 8;

    // displaying values of the data members of 'struct MyPoint' (all variables)
    printf("\n\n");
    printf("Co-ordinates (x,y) of point 'A' are : (%d,%d)\n\n", point_A_ra.x_ra, point_A_ra.y_ra);
    printf("Co-ordinates (x,y) of point 'B' are : (%d,%d)\n\n", point_B_ra.x_ra, point_B_ra.y_ra);
    printf("Co-ordinates (x,y) of point 'C' are : (%d,%d)\n\n", point_C_ra.x_ra, point_C_ra.y_ra);
    printf("Co-ordinates (x,y) of point 'D' are : (%d,%d)\n\n", point_D_ra.x_ra, point_D_ra.y_ra);
    printf("Co-ordinates (x,y) of point 'E' are : (%d,%d)\n\n", point_E_ra.x_ra, point_E_ra.y_ra);

    return (0);
}