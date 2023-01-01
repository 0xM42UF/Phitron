#include <stdio.h>

void consecutive_ev_nums(int num);

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int N;
        scanf("%d", &N);

        consecutive_ev_nums(N);
    }
    return 0;
}

void consecutive_ev_nums(int num)
{
    int i;
    for(i=2; i<=num/3; i+=2)
    {
        int sum = i + i+2 + i+4 + i+6;
        if(sum == num)
        {
            printf("%d %d %d %d\n", i, i+2, i+4, i+6);
            break;
        }
    }
}
