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
    int m=ara[0];
    for(i = 0 ; i < n ; i++ )
    {
        if(ara[i]>m)
        {
           m = ara[i];
        }
        else
        {
            //do nothing
        }
    }
    printf("The maximum value is %d\n",m);
    return 0;
}
