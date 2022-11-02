#include<stdio.h>
int main()
{


    int i,n,m;


    printf("enter n>>");
    scanf("%d",&n);
    printf("enter m>>");
    scanf("%d",&m);

    for(i=m;i<=n;i++)
    {
        if(i%m==0)
        {
            printf("%d\n",i);
        }


    }
    return 0;
}
