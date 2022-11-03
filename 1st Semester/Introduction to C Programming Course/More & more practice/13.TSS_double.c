#include <stdio.h>
int main()
{
    double num1,num2,jo,bi,gu,va;
    printf("Please enter a number: ");
    scanf("%lf", &num1);

    printf("Please enter another number: ");
    scanf("%lf", &num2);

    jo = num1+num2;
    bi = num1-num2;
    gu = num1*num2;
    va = num1/num2;

    printf("%lf\n",jo);
    printf("%lf\n",bi);
    printf("%lf\n",gu);
    printf("%lf\n",va);
    return 0;
}





