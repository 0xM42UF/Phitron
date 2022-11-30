#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d-th possition value = %d\n",i,arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d-th possition value = %d\n",i,arr[i]);
    }
    return 0;
}
