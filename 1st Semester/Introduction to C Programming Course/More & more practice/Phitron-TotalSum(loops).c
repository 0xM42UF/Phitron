#include <stdio.h>
int main()
{
    int n,i,sum=0,w;
    printf("Enter the number of passengers: ");
    scanf("%d",&n);
    sum=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&w);
        sum = sum+w;
    }
    printf("Total sum of Weights = %d",sum);

    return 0;
}
