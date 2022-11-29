#include<stdio.h>
int main()
{
    int n,i,m=4,larg,sma;
    scanf("%d",&n);
    larg = n;
    sma = n;
    for(i=1; i<= m; i++)
    {
        printf("");
        scanf("%d",&n);

        if(larg<n)
        {
            larg=n;
        }
        if(n<sma)
        {
            sma=n;
        }
    }
    printf ("largest %d \n", larg);
    printf ("Smallest %d \n", sma);
    return 0;
}
