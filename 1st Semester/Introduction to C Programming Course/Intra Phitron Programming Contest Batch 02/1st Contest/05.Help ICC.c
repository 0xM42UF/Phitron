#include<stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int f[6],cnt=0;

        for(int i=0; i<6; i++)
        {
            scanf("%d",&f[i]);
        }
        for(int i=0; i<6; i++)
        {
            if(f[i]>0)
            {
                cnt++;
            }
        }
        if(cnt>0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }

    }
    return 0;
}



