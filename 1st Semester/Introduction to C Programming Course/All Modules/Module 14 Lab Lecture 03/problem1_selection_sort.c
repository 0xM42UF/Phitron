#include <stdio.h>

int main()
{
    int a[] = {5,4,6,9,7,16,12,19};
    int len = sizeof(a)/sizeof(a[0]);


    int i,j,idx_min;

    for(i=0; i<len; i++)
    {
        idx_min = i;
        for(j=i; j<len; j++)
        {
            if(a[j] < a[idx_min])
            {
                idx_min = j;
            }
        }
        int temp;
        if(a[i] != a[idx_min])
        {
            temp = a[i];
            a[i] = a[idx_min];
            a[idx_min] = temp;
        }

    }

    for(i=0; i<len; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
