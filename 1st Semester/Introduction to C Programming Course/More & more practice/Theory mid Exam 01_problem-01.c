#include <stdio.h>
int main()
{
    int a=5, b=13;
    int x = 0;
    x=a;
    a=b;
    a=x;
    printf("%d and %d" , a, b);


    return 0;
}
