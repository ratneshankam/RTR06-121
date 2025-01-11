#include <stdio.h>

// global typedef
typedef int MY_INT; // "type" int has been re'def'ined as MY_INT ... Now, "MY_INT" can be treated just like "int"

int main(void)
{
    // fuction prototype
    MY_INT add(MY_INT, MY_INT);

    // Typedefs
    typedef int MY_INT;
    typedef float MY_FLOAT;
    typedef char MY_CHAR;
    typedef char MY_DOUBLE;

    // ****** Just like in win32sdk !!! ******
    typedef unsigned int UINT;
    typedef UINT HANDLE;
    typedef HANDLE HWND;
    typedef HWND HINSTANCE;

    // variables declarations
    MY_INT a_ra = 10, i_ra;
    MY_INT iArray_ra[] = {9, 18, 27, 36, 45, 54, 63, 72, 81, 90};

    MY_FLOAT f_ra = 30.9f;
    const MY_FLOAT f_pi_ra = 3.142f;

    MY_CHAR ch_ra = '*';
    MY_CHAR chArray_01_ra[] = "Hello";
    MY_CHAR chArray_02_ra[][10] = {"RTR", "Batch", "2024-25"};

    MY_DOUBLE d_ra = 8.0534904;

    // ******** Just random numbers - they have nothing to do with any window's handle or instance handle !!! this is just for understanding ********

    UINT uint_ra = 3456;
    HANDLE handle_ra = 987;
    HWND hwnd_ra = 9876;
    HINSTANCE hInstance_ra = 1446;

    // code
    printf("\n\n");
    printf("Type MY_INT variable a = %d\n", a_ra);

    printf("\n\n");
    for (i_ra = 0; i_ra < (sizeof(iArray_ra) / sizeof(int)); i_ra++)
    {
        printf("Type MY_INT array variable iArray_ra[%d] = %d\n", i_ra, iArray_ra[i_ra]);
    }
    printf("\n\n");

    printf("Type MY_FLOAT variable f = %f\n", f_ra);
    printf("Type MY_FLOAT constant f_pi = %f\n", f_pi_ra);

    printf("\n\n");
    printf("Type MY_DOUBLE variable d = %d\n", d_ra);

    printf("\n\n");
    printf("Type MY_CHAR variable ch = %c\n", ch_ra);

    printf("\n\n");
    printf("Type MY_CHAR array variable chArray_01_ra = %s\n", chArray_01_ra);

    printf("\n\n");
    for (i_ra = 0; i_ra < (sizeof(chArray_02_ra) / sizeof(chArray_02_ra[0])); i_ra++)
    {
        printf("%s\t", chArray_02_ra[i_ra]);
    }
    printf("\n\n");

    printf("Type UINT variable uint = %u\n\n", uint_ra);
    printf("Type HANDLE variable handle = %u\n\n", handle_ra);
    printf("Type HWND variable hwnd = %u\n\n", hwnd_ra);
    printf("Type HINSTANCE variable hInstance = %u\n\n", hInstance_ra);

    MY_INT x_ra = 90;
    MY_INT y_ra = 30;
    MY_INT ret_ra;

    ret_ra = add(x_ra, y_ra);
    printf("ret_ra = %d\n\n", ret_ra);

    return (0);
}

MY_INT add(MY_INT a_ra, MY_INT b_ra)
{
    // code
    MY_INT c_ra;
    c_ra = a_ra + b_ra;
    return (c_ra);
}