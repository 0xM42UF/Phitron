#include<stdio.h>
int main()
{
    int n;
    int arr[100];
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int e_o=0, o_c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2 == 0)
        {
            e_o++;
        }
        else
        {
            o_c++;
        }

    }
    printf("%d\n",e_o);
    printf("%d\n",o_c);

    return 0;
}

