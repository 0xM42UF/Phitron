#include <stdio.h>

int main()
{
    int N, i, j, count=0;

    scanf("%d ", &N);

    int arr[N], prime[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d ", arr[i]);
    }

    for (i = 0; i < N; i++)
    {   int flag = 0;
        int num = arr[i];
        for (j = 2; j <= num/2; j++)
        {
            if(num%j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            printf("Prime %d\n", num);
        }else
        {
            printf("Composite %d\n", num);
        }
    }

    return 0;
}
