#include <stdio.h>

int main(void)
{
    printf("Start Main Block\n");

    printf("Decrement While Loop\n");
    int i_ra = 10;
    while (i_ra >= 1)
    {
        printf("%d\n", i_ra);
        i_ra--;
    }
    printf("End Of Decrement While Loop\n");

    printf("End Block\n");

    return 0;
}

/*
CODE OUTPUT :

apple@Ratnesh Loop_Assignments % ./a.out
Start Main Block
Decrement While Loop
10
9
8
7
6
5
4
3
2
1
End Of Decrement While Loop
End Block

*/