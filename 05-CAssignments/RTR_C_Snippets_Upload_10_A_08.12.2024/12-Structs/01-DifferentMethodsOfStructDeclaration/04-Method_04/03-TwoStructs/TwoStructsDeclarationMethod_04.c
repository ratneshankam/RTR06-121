#include <stdio.h>

// Defining struct
struct MyPoint
{
    int x_ra;
    int y_ra;
};

// Defining struct
struct MyPointProperties
{
    int quadrant_ra;
    char axis_location_ra[10];
};

int main(void)
{
    struct MyPoint point_ra;                      // Declaring a single variables of type 'struct MyPoint' locally...
    struct MyPointProperties point_properties_ra; // Declaring a single variables of type 'struct MyPointProperties' locally...

    // code
    // user input for the data members of 'struct MyPoint' variable 'point_ra'
    printf("\n\n");
    printf("Enter x-coordinate for A point : ");
    scanf("%d", &point_ra.x_ra);
    printf("Enter y-coordinate for A point : ");
    scanf("%d", &point_ra.y_ra);

    printf("\n\n");
    printf("Point co-ordinates (x,y) are : (%d,%d) !!!\n\n ", point_ra.x_ra, point_ra.y_ra);

    if (point_ra.x_ra == 0 && point_ra.y_ra == 0)
    {
        printf("The point is the origin (%d,%d) !!!\n\n ", point_ra.x_ra, point_ra.y_ra);
    }
    else // atleast one of the two values (either 'x' or 'y' or both) is a non zero value...
    {
        if (point_ra.x_ra == 0) // if 'x' is zero ... obviously 'y' is the non zero value
        {
            if (point_ra.y_ra < 0) // if 'Y' is negative
            {
                strcpy(point_properties_ra.axis_location_ra, "Negative Y");
            }
            if (point_ra.y_ra > 0) // if 'Y' is positive
            {
                strcpy(point_properties_ra.axis_location_ra, "Positive Y");
            }

            point_properties_ra.quadrant_ra = 0; // a point lying on any of the coordinates axes is not a part of any quadrant...

            printf("The point lies on the %s axis !!!\n", point_properties_ra.axis_location_ra);
        }
        else if (point_ra.y_ra == 0) // if 'Y' is zero...obviously 'X' is the non-zero value
        {
            if (point_ra.x_ra < 0) // if 'X' is negative
            {
                strcpy(point_properties_ra.axis_location_ra, "Negative X");
            }
            if (point_ra.x_ra > 0) // if 'X' is positive
            {
                strcpy(point_properties_ra.axis_location_ra, "Positive X");
            }

            point_properties_ra.quadrant_ra = 0; // a point lying on any of the co-ordinates axes is not a part of any quadrant...

            printf("The point lies on the %s axis !!!\n\n", point_properties_ra.axis_location_ra);
        }
        else // both 'X' and 'Y' are non-zero
        {
            point_properties_ra.axis_location_ra[0] = '\0'; // a point lying in any of the 4 quadrants cannot be lying on any of the coordinates axes...

            if (point_ra.x_ra > 0 && point_ra.y_ra > 0) // 'x' is positive and 'y' is negative
            {
                point_properties_ra.quadrant_ra = 1;
            }
            else if (point_ra.x_ra < 0 && point_ra.y_ra > 0) // 'x' is positive and 'y' is negative
            {
                point_properties_ra.quadrant_ra = 2;
            }
            else if (point_ra.x_ra < 0 && point_ra.y_ra < 0) // 'x' is negative and 'y' is negative
            {
                point_properties_ra.quadrant_ra = 3;
            }
            else // 'x' is positive and 'y' is positive
            {
                point_properties_ra.quadrant_ra = 4;
            }

            printf("The point lies in quadrant number %d !!!\n", point_properties_ra.quadrant_ra);
        }
    }

    return (0);
}