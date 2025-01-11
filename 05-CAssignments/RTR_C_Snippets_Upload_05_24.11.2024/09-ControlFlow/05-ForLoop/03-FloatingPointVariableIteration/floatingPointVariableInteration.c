#include <stdio.h>

int main(void)
{
    // variable declarations
    float f_ra;
    float f_num_ra = 1.7f; // change this value only to get different values output

    // code
    printf("\n\n");

    printf("Printing Numbers %f to %f : \n\n", f_num_ra, (f_num_ra * 10.f));

    for (f_ra = f_num_ra; f_ra <= (f_num_ra * 10.0f); f_ra += f_num_ra) {
    
        printf("\t%f\n", f_ra);
    }

    printf("\n\n");

    return (0);
}