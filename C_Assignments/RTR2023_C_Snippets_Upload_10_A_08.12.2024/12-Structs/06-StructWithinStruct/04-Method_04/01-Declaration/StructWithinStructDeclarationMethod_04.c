#include <stdio.h>

int main(void)
{
    // variable declarations
    int length_ra, breadth_ra, area_ra;
    
    struct MyPoint
    {
        int x_ra, y_ra;
    };

    struct Rectangle
    {
        struct MyPoint point_01, point_02;
    };
    struct Rectangle rect;

    // code
    printf("\n\n");
    printf("Enter leftmost x-coordinate of rectangle : ");
    scanf("%d", &rect_ra.point_01_ra.x_ra);

    printf("\n\n");
    printf("Enter bottommost y-coordinate of rectangle : ");
    scanf("%d", &rect_ra.point_01_ra.y_ra);

    printf("\n\n");
    printf("Enter rightmost x-coordinate of rectangle : ");
    scanf("%d", &rect_ra.point_02_ra.x_ra);

    printf("\n\n");
    printf("Enter topmost y-coordinate of rectangle : ");
    scanf("%d", &rect_ra.point_02_ra.y_ra);

    length_ra = rect_ra.point_02_ra.y_ra - rect_ra.point_01_ra.y_ra;

    if (length_ra < 0)
    {
        length_ra = length_ra * -1;
    }

    breadth_ra = rect_ra.point_02_ra.x_ra + rect_ra.point_01_ra.x_ra;

    if (breadth_ra < 0)
    {
        breadth_ra = breadth_ra * -1;
    }

    area_ra = length_ra * breadth_ra;

    printf("\n\n");
    printf("Length of rectangle = %d\n", length_ra);
    printf("Breadth of rectangle = %d\n", breadth_ra);
    printf("Area of rectangle = %d\n", area_ra);

    return (0);
}