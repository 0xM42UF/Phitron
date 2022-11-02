#include<stdio.h>
int main()
{
    int i,j,s,c;
    scanf("%d",&s);
    scanf("%d",&c);
    for(i=0;i<s;i++)
    {
        //print 5 star
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}


