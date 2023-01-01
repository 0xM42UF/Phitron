#include <stdio.h>

int pyramid(int n);

int main()
{
    int x;
    scanf("%d", &x);
    pyramid(x);
    return 0;
}

int pyramid(int n)
{
    int i, j;
    int x = (n*2) - 1;

    for(i=1; i<=x; i+=2)
    {
        for(j=x+1-i; j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
        for(j=x-i; j<x; j+=2)
        {
            printf(" ");
        }

    }
   return 0;
}
