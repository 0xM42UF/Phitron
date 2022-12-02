#include<stdio.h>
int main()
{
    int N=7,i,j;

    for(i=1;i<=N;i++)
    {
        printf("#");
        for(j=1;j<=i-2;j++)
        {
            printf(" ");
        }
        printf("#\n");
    }
    for(j=1;j<=N;j++)
        {
            printf("#");
        }
        printf("#\n");

    return 0;
}

