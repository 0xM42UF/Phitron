#include<stdio.h>
int main()
{
    int N=7,i,j;
    //print # N times
    for(i=1;i<=N;i++)
    {
        printf("#");
    }
    printf("\n");

    for(j=1;j<=N;j++)
    {
        printf("#");
        for(i=1;i<=N-2;i++)
        {
            printf(" ");
        }
        printf("#\n");
    }

     //print # N times
    for(i=1;i<=N;i++)
    {
        printf("#");
    }
    printf("\n");
    return 0;
}
