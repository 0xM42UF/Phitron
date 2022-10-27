//Write a C program to take one positive integer N as input and print from 1 to N.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;

    printf("Enter Your positive integer: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }

    return 0;
}
