#include <stdio.h>
int main()
{
    long long int n;
    int x;
    scanf("%lld",&n);
    int i=1;
    while(i<n)
    {
        x = n%10;

        i++;
    }
    printf("%d",x);


    return 0;
}

