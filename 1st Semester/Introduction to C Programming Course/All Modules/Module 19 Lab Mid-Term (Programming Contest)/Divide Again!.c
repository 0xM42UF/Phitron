#include<stdio.h>
int main()
{
    int n;
    int sum;
    scanf("%d",&n);
    if(n % 3 == 0)
    {
        sum = n/3;
        printf("%d\n",sum);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
