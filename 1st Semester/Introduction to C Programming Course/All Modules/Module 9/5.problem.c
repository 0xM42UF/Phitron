#include<stdio.h>
int main()
{
    int i,j;
    float x,sum,avg;
    for(i=1;i<=10;i++)
    {
        printf("Enter marks of %d th std: ",i);
        sum=0.0;
        for(j=1;j<=3;j++)
        {
            scanf("%f",&x);
            sum += x;
        }
        avg =sum/3;
        printf("Average = %f \n",avg);
    }








    return 0;
}
