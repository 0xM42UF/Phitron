#include <stdio.h>
int main()
{
    int i,j;
    float sum, avg,x;
    for(i=1;i<=5;i++)
    {
        sum=0.0;
        printf("Enter the mark of %d-th students: ",i);

        for(j=1;j<=3;j++)
        {
            scanf("%f",&x);
            sum = sum + x;
        }
        avg = sum / 3;
        printf("avarage mark->%0.2f",avg);
        printf("\n");
    }
    return 0;
}
