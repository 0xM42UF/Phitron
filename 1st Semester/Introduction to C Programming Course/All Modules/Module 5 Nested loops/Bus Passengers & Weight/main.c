#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,w,sum=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&w);
        sum += w;
    }
    printf("Total Weight = %d",sum);
    return 0;
}
