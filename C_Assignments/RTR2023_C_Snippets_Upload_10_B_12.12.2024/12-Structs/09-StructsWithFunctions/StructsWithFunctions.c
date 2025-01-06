#include <stdio.h>

struct MyData
{
    int i_ra;
    float f_ra;
    double d_ra;
    char c_ra;
};

int main(void)
{
    // function prototypes
    struct MyData addStructMembers(struct MyData, struct MyData, struct MyData);

    // variable declarations
    struct MyData data1_ra, data2_ra, data3_ra, answer_data_ra;

    // code
    // *** data 1 ***
    printf("\n\n\n\n");
    printf("***** Data 1 *****\n\n");
    printf("Enter integer value for 'i_ra' of 'struct MyData data1_ra' : ");
    scanf("%d", &data1_ra.i_ra);

    printf("\n\n");
    printf("Enter float value for 'f_ra' of 'struct MyData data1_ra' : ");
    scanf("%f", &data1_ra.f_ra);

    printf("\n\n");
    printf("Enter double value for 'd_ra' of 'struct MyData data1_ra' : ");
    scanf("%lf", &data1_ra.d_ra);

    printf("\n\n");
    printf("Enter character value for 'c_ra' of 'struct MyData data1_ra' : ");
    scanf(" %c", &data1_ra.c_ra);

    // *** data 2 ***
    printf("\n\n\n\n");
    printf("***** Data 2 *****\n\n");
    printf("Enter integer value for 'i_ra' of 'struct MyData data2_ra' : ");
    scanf("%d", &data2_ra.i_ra);

    printf("\n\n");
    printf("Enter float value for 'f_ra' of 'struct MyData data2_ra' : ");
    scanf("%f", &data2_ra.f_ra);

    printf("\n\n");
    printf("Enter double value for 'd_ra' of 'struct MyData data2_ra' : ");
    scanf("%lf", &data2_ra.d_ra);

    printf("\n\n");
    printf("Enter character value for 'c_ra' of 'struct MyData data2_ra' : ");
    scanf(" %c", &data2_ra.c_ra);

    // *** data 3 ***
    printf("\n\n\n\n");
    printf("***** Data 3 *****\n\n");
    printf("Enter integer value for 'i_ra' of 'struct MyData data3_ra' : ");
    scanf("%d", &data3_ra.i_ra);

    printf("\n\n");
    printf("Enter float value for 'f_ra' of 'struct MyData data3_ra' : ");
    scanf("%f", &data3_ra.f_ra);

    printf("\n\n");
    printf("Enter double value for 'd_ra' of 'struct MyData data3_ra' : ");
    scanf("%lf", &data3_ra.d_ra);

    printf("\n\n");
    printf("Enter character value for 'c_ra' of 'struct MyData data3_ra' : ");
    scanf(" %c", &data3_ra.c_ra);

    // *** Calling function addStructMembers() which accepts three variables of type 'struct MyData' as parameters and adds up the respective members and returns the answer in another struct of same type ***
    answer_data_ra = addStructMembers(data1_ra, data2_ra, data3_ra);

    printf("\n\n\n\n");
    printf("******* Answer *******\n\n");
    printf("answer_data_ra.i_ra = %d\n", answer_data_ra.i_ra);
    printf("answer_data_ra.f_ra = %f\n", answer_data_ra.f_ra);
    printf("answer_data_ra.d_ra = %lf\n", answer_data_ra.d_ra);

    answer_data_ra.c_ra = data1_ra.c_ra;
    printf("answer_data_ra.c_ra (from data 1) = %c\n", answer_data_ra.c_ra);

    answer_data_ra.c_ra = data2_ra.c_ra;
    printf("answer_data_ra.c_ra (from data 2) = %c\n", answer_data_ra.c_ra);

    answer_data_ra.c_ra = data3_ra.c_ra;
    printf("answer_data_ra.c_ra (from data 3) = %c\n", answer_data_ra.c_ra);

    return (0);
}

struct MyData addStructMembers(struct MyData md_one_ra, struct MyData md_two_ra, struct MyData md_three_ra)
{
    // variable declarations
    struct MyData answer_ra;

    // code
    answer_ra.i_ra = md_one_ra.i_ra + md_two_ra.i_ra + md_three_ra.i_ra;
    answer_ra.f_ra = md_one_ra.f_ra + md_two_ra.f_ra + md_three_ra.f_ra;
    answer_ra.d_ra = md_one_ra.d_ra + md_two_ra.d_ra + md_three_ra.d_ra;

    return (answer_ra);
}