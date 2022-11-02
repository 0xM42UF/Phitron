#include<stdio.h>
int main()
{
   int a,b,x,c,d,i;
   scanf("%d%d",&a,&b);
   c=a;
   d=b;
   for(i=0; b!=0; i++)
    {
        x=a%b;
        a=b;
        b=x;
    }
    printf("The GCD of %d and %d is %d. ",c,d,a);
    return 0;
}



