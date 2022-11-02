#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter your three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if (a>b&&a>c)
    {
        printf("A is largest.");
    }
    else if(b>a&&b>c)
    {
        printf("B is Largest.");
    }
    else
    {
        printf("C is largest.");
    }
    return 0;
}
