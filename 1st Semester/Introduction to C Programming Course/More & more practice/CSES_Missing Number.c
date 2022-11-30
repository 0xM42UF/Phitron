#include<stdio.h>
int main()
{
    int x,n,i;
    int arr[20000002];
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&x);
        arr[x] = 1;
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i] ==0)
        {
            printf("%d",i);
            break;
        }
    }

    return 0;
}
