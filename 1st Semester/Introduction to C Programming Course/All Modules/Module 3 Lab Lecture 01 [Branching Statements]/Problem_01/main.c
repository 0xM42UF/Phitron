#include <stdio.h>

int main()
{
    int x;
    printf("Enter your numbe: ");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("The input is an even number \n");
    }
    else
    {
        printf("The input is an odd number \n");
    }
    return 0;
}
