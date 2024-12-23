#include <stdio.h>

int main(void)
{
    int a[5];

    printf("%d %d %d", sizeof(a), sizeof(a[0]), sizeof(a) / sizeof(a[0]));

    return (0);
}