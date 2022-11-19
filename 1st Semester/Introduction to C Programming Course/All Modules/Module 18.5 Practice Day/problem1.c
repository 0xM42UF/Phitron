#include <stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);

    if(N > 0)
    {
        for(i=N; i>=N*-1; i--)
        {
            printf("%d ", i);
        }

    }
    else
    {
      for(i=N; i<=N*-1; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
