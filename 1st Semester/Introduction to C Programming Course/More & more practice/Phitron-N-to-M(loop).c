#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    if(n<m)
    {
        for(int i=n;i<=m;i++)
        {
            printf("%d ",i);
        }
    }
    else if(n>m)
    {
         for(int i=n;i>=m;i--)
        {
            printf("%d ",i);
        }
    }
    return 0;
}




