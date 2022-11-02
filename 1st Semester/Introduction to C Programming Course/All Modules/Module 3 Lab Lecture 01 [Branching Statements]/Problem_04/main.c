#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w;

    printf("Enter the watermelon weight: ");
    scanf("%d",&w);
    if (w==2)
    {
        printf("Impossible");
    }
    else if (w%2==0)
    {
        printf("Possible");

    }
    else
    {
        printf("Impossible");
    }

    return 0;
}
