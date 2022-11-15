#include<stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
    int n,min;
    scanf("%d",&n);
    int f[10],l[10];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&f[i]);
        l[i] = abs(f[i]-100);
    }
    min = l[0];
    for(int i=0; i<n; i++)
    {
        if(l[i]<min)
        {
            min = l[i];
        }
    }
    printf("%d\n",abs(min - 100));
   }
    return 0;
}


