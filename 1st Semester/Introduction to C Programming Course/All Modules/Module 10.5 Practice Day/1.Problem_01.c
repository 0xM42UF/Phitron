#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int ara[n];
    ara[0] = 0;
    ara[1] = 1;
    for(i=2,j=0,k=1;i<n;i++,j++,k++)
    {
      ara[i] = ara[j] + ara[k];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }

    return 0;
}
