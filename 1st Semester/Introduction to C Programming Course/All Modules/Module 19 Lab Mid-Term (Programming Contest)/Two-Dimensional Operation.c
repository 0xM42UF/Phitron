#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int array[101] [101];
    for(int i=1; i<=y; i++)
    {
        for(int j=1; j<=y; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=y; j++)
        {
            if(i==array[i][j] && j==array[i][j])
            {
                array[i][j] = array[i][j] + 3;
                printf("%d " ,array[i][j]);
            }
            else if(i==array[i][j])
            {
                array[i][j] = array[i][j] + 2;
                printf("%d ",array[i][j]);
            }
            else if(j==array[i][j])
            {
                array[i][j] = array[i][j] + 1;
                printf("%d ",array[i][j]);
            }
            else
            {
                printf("%d ",array[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
