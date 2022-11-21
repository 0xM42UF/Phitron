#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);

    for(int i=m; i<=n; i++)
    {
        if(i%m==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}


