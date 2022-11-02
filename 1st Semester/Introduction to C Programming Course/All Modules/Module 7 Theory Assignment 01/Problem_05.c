#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",x);
    while(x>1)
        {
            if(x%2==0)
                {
                    x=x/2;
                }
            else
                {
                    x=x-1;
                }
            printf(",%d",x);
        }
    return 0;
}
