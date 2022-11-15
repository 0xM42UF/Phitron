#include<stdio.h>
int main()
{

    int a;
    scanf("%d",&a);
    char arr[10];
    for(int j=0; j<a; j++)
    {
        int h=0,t=0;
        int n;
        scanf("%d",&n);
        scanf("%s",&arr);
        for(int k=0; k<n; k++)
        {
            if(arr[k]=='H')
            {
                h++;
            }
            else if(arr[k]=='T')
            {
                t++;
            }
        }
        if(h>t)
        {
            printf("England\n");
        }
        else if(t>h)
        {
            printf("Pakistan\n");
        }
    }


    return 0;
}

