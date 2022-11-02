//Write a C program to take one integer N as input and print from 1 to N.
#include <stdio.h>
int main()
{


    int n,i;
    scanf("%d", &n);
    if(0<n)
    {
        for(i=1;i<=n;i++)
        {
            printf("%d ",i);
            printf("\n");
        }
        printf("\n");
    }   else
    {
        for(i=1;i>=n;i--)
        {
            printf("%d ",i);
            printf("\n");
        }
        printf("\n");
    }






    return 0;
}
