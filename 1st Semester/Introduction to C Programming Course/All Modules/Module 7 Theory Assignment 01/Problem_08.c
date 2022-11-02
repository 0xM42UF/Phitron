#include <stdio.h>

int main()
{
    int a,b,x,c,d,lcm;
    scanf("%d%d",&a,&b);
    c=a;
    d=b;
    for(int i=0;b!=0;i++)
        {
            x=a%b;
            a=b;
            b=x;

        }
        lcm=(c*d)/a;
        printf("The LCM of %d and %d is %d.",c,d,lcm);
    return 0;
}
