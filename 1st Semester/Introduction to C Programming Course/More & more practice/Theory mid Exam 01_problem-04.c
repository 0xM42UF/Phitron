#include <stdio.h>
int main()
{
    long long int n;
    int sum=0,y;
    scanf("%lld",&n);
    int x = n;
    while(x != 0)
    {
        y = x%10;
        sum = sum+y;
        x = x/10;
    }
    printf("%d",sum);
    return 0;
}
