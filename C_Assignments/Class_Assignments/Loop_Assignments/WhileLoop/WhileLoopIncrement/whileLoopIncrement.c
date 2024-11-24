#include <stdio.h>

int main(void)
{
    printf("Start Main Block\n");

    printf("Increment While Loop\n");
    int i_ra = 1;
    while (i_ra <= 10)
    {
        printf("%d\n", i_ra);
        i_ra++;
    }
    printf("End Of Increment While Loop\n");

    printf("End Block\n");

    return 0;
}

/*
CODE OUTPUT :

apple@Ratnesh Loop_Assignments % ./a.out
Start Main Block
Increment While Loop
1
2
3
4
5
6
7
8
9
10
End Of Increment While Loop
End Block

*/