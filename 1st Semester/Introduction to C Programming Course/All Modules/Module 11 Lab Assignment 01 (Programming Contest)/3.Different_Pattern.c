#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,m;
    scanf("%d",&n);
    for(i=1 ;i<=n; i++)
    {
        for(m=i; m>=1; m--)
        {
            printf("%d ",m);
        }
        printf("\n");
    }
    return 0;
}
