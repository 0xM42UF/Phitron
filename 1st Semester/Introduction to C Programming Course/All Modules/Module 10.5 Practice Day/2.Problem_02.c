#include <stdio.h>

int main ()
{
    int N, i, max, arr[N];
    scanf("%d", &N);

    for(i=0;i<N;i++)
    {
        scanf("%d ", &arr[i]);
    }
    max=arr[0];
    for(i=0;i<N;i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int d_arr[max + 1];
    for(i=0;i<=max;i++)
    {
        d_arr[i] = 0;
    }

    for(i=0;i<N;i++)
    {
        d_arr[arr[i]] = 1;
    }

    for(i=0;i<=max;i++)
    {
       if(d_arr[i] == 1)
           printf("%d ", i);
    }

    return 0;
}
