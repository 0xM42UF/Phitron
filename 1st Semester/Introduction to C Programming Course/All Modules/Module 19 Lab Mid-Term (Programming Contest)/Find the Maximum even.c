#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int g[n+5],e[n],o[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&g[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(g[j]>g[j-1])
            {
                int temp = g[j];
                g[j] = g[j-1];
                g[j-1] = temp;
            }
        }
    }
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(g[i]%2==0)
        {
            e[p]=g[i];
            p++;
        }
    }
    int q=0;
    for(int i=0;i<n;i++)
    {
        if(g[i]%2 != 0)
        {
            o[q] = g[i];
            q++;
        }
    }
    int x=0,y=0;
    x = e[0];
    for(int i=1;i<p;i++)
    {
        if(e[i] != x)
        {
            y = e[i];
            break;
        }
    }
    int s=0,r=0;
    if(q > 1)
    {
        s = o[0];
        for(int i=1; i<q; i++)
        {
            if(o[i] != s)
            {
                r = o[i];
                break;
            }
        }
    }
    int g1 = (x+y);
    int g2 = (s+r);

    if( g1 >= g2 )
    {
        printf("%d",g1);
    }

    else printf("%d",g2);

   return 0;
}
