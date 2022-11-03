#include <stdio.h>
int main()
{
    int num1,num2,jo,bi,gu,va;
    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    jo = num1+num2;
    bi = num1-num2;
    gu = num1*num2;
    va = num1/num2;

    printf("%d\n",jo);
    printf("%d\n",bi);
    printf("%d\n",gu);
    printf("%d\n",va);
    return 0;
}




