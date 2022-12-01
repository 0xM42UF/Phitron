#include<stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {

        for(j=0;j<i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

