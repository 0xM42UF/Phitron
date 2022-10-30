#include<stdio.h>
int main()
{
    int n=5;
    int ara[n];
    int i;

    for(i = 0 ; i < n ; i++ )
    {
        scanf("%d",&ara[i]);
    }
    for(i = 0 ; i < n ; i++ )
    {
        printf("%d-th possion value = %d\n",i,n);
    }
    return 0;
}
