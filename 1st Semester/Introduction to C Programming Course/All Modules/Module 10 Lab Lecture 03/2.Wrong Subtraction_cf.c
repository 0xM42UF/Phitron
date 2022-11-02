//https://codeforces.com/problemset/problem/977/A
#include <stdio.h>
int main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<k;i++)
    {
        if(n%10==0)
            n=n/10;
        else
            n = n-1;
    }
    printf("%d",n);


    return 0;

}
