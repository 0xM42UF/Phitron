#include <stdio.h>

int sum_last_first(int n);

int main()
{
    int i, x;
    scanf("%d", &x);

    int a[x];
    for(i=0; i<x; i++)
    {
        scanf("%d ", &a[i]);
    }

    int totalSum=0;
    for(i=0; i<x; i++)
    {
        int sum;
        sum = sum_last_first(a[i]);

        totalSum += sum;

    }
    printf("Sum = %d", totalSum);
    return 0;
}

int sum_last_first(int n)
{
    int sum=0;

    sum = n % 10 + n / 1000;

    return sum;
}
