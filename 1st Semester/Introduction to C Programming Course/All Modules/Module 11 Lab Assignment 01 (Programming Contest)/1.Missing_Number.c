#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int s,a,b,c;
        scanf("%d%d%d%d",&s,&a,&b,&c);
        int x = a+b+c;
        int result = s - x;
        printf("%d\n",result);
    }
    return 0;
}
