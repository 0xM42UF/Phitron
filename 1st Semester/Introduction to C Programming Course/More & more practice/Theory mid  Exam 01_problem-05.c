#include <stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    printf("%d,",n);
    for(int i=1;n>1; i++)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=n-1;
        }
        printf("%d,",n);
    }
    return 0;
}
