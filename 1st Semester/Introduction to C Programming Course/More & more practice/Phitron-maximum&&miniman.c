#include<stdio.h>
int main()
{
    int arr[6]={12,7,19,26,11,6};
    int i;
    int m=arr[0];
    for(i=0;i<6;i++)
    {
        if(arr[i]>m)//minimum(arr[i]<m)
        {
            m=arr[i];
        }
    }
    printf("The maximum value is %d\n",m);
    //printf("The minimum value is %d\n",m);

    return 0;
}
