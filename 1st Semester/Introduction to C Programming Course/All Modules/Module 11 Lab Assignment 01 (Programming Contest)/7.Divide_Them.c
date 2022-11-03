#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int m;
    scanf("%d",&m);
    for(int i=m+1; i<=n; i++)
    {
      printf("%d ",ara[i]);
    }
    for(int i=1; i<=m; i++)
    {
      printf("%d ",ara[i]);
    }
    return 0;
}


