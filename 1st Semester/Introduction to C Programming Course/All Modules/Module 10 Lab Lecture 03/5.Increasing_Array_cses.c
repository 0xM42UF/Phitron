//https://cses.fi/problemset/task/1094
#include <stdio.h>
int main()
{
    int n,i,ara[200003];
    scanf("%d",&n);
    int moves = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=1;i<n;i++)
    {
        if(ara[i]<ara[i-1])
        {
            moves += (ara[i-1] - ara[i]);
            ara[i] = ara[i-1];
        }
    }
    printf("%d\n",moves);

    return 0;
}
