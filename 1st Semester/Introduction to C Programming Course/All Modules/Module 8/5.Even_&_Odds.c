#include<stdio.h>
int main()
{
    int n;
    int ara[100];
    int i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int e_c = 0, o_c= 0;

    for(i=0;i<n;i++)
    {
        if(ara[i]%2==0)
            e_c++;
        else
            o_c++;
    }
    printf("No. of evens = %d\n",e_c);

    printf("No. of odds = %d\n",o_c);



    return 0;
}
