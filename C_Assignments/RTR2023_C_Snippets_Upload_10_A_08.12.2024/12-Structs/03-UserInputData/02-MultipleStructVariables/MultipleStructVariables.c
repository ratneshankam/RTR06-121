#include <stdio.h>

// Defining struct ...
struct MyPoint
{
    int x_ra;
    int y_ra;
};

int main(void)
{
    // variable declarations
    struct MyPoint point_A_ra, point_B_ra, point_C_ra, point_D_ra, point_E_ra; // Declaring 5 struct variables

    // code
    // user input for the data members of 'struct MyPoint' variable 'point_A_ra'
    printf("\n\n");
    printf("Enter X-Coordinate for point 'A' : ");
    scanf("%d", &point_A_ra.x_ra);
    printf("Enter Y-Coordinate for point 'A' : ");
    scanf("%d", &point_A_ra.y_ra);

    // user input for the data members of 'struct MyPoint' variable 'point_B_ra'
    printf("\n\n");
    printf("Enter X-Coordinate for point 'B' : ");
    scanf("%d", &point_B_ra.x_ra);
    printf("Enter Y-Coordinate for point 'B' : ");
    scanf("%d", &point_B_ra.y_ra);

    // user input for the data members of 'struct MyPoint' variable 'point_C_ra'
    printf("\n\n");
    printf("Enter X-Coordinate for point 'C' : ");
    scanf("%d", &point_C_ra.x_ra);
    printf("Enter Y-Coordinate for point 'C' : ");
    scanf("%d", &point_C_ra.y_ra);

    // user input for the data member of 'struct MyPoint' variable 'point_D_ra'
    printf("\n\n");
    printf("Enter X-Coordinate for point 'D' : ");
    scanf("%d", &point_D_ra.x_ra);
    printf("Enter Y-Coordinate for point 'D' : ");
    scanf("%d", &point_D_ra.y_ra);

    // user input for the data member of 'struct MyPoint' variable 'point_E_ra'
    printf("\n\n");
    printf("Enter X-Coordinate for point 'E' : ");
    scanf("%d", &point_E_ra.x_ra);
    printf("Enter Y-Coordinate for point 'E' : ");
    scanf("%d", &point_E_ra.y_ra);
    

    // displaying values of the data members of 'struct MyPoint' (all variables)
    printf("\n\n");
    printf("Co-ordinates (x,y) of point 'A' are : (%d,%d)\n\n", point_A_ra.x_ra, point_A_ra.y_ra);
    printf("Co-ordinates (x,y) of point 'B' are : (%d,%d)\n\n", point_B_ra.x_ra, point_B_ra.y_ra);
    printf("Co-ordinates (x,y) of point 'C' are : (%d,%d)\n\n", point_C_ra.x_ra, point_C_ra.y_ra);
    printf("Co-ordinates (x,y) of point 'D' are : (%d,%d)\n\n", point_D_ra.x_ra, point_D_ra.y_ra);
    printf("Co-ordinates (x,y) of point 'E' are : (%d,%d)\n\n", point_E_ra.x_ra, point_E_ra.y_ra);

    return (0);
}