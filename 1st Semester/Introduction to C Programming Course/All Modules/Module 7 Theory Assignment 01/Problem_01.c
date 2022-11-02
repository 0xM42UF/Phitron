#include<stdio.h>
int main()
{

    int a=5, b=13, x;
    if(a<b)
    {
        x=a;
        a=b;
        b=x;
    }
    printf("%d and %d" , a, b);

    return 0;
}
