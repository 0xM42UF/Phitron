#include<stdio.h>
int main()
{
    int ara[10];

    ara[0] = 3450;
    ara[1] = 450;
    ara[2] = 300;
    ara[3] = ara[0] - ara[1];

    printf("%d\n",ara[0]);
    printf("%d\n",ara[1]);
    printf("%d\n",ara[2]);
    printf("%d\n",ara[3]);
    printf("%d",ara[4]);

    return 0;
}
