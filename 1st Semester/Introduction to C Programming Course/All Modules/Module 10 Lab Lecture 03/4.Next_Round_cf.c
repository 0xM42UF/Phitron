//https://codeforces.com/problemset/problem/158/A
#include <stdio.h>
int main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    int ara[65];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int ans = 0;
    for(i=1;i<=n;i++)
    {
        if(ara[i]>=ara[k] && ara[i>0])
           ans++;
    }
    printf("%d\n",ans);

    return 0;

}

