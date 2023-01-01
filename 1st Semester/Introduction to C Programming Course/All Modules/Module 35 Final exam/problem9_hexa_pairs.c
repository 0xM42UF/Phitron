#include <stdio.h>

int get_gcd(int a, int b);

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int n, i, j, pairs = 0;
        scanf("%d", &n);

        int ara[n];
        for(i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(i != j)
                {
                    int val = get_gcd(ara[i], ara[j]);
                    val == 1 ? pairs++ : pairs;
                }
            }
        }
        printf("%d\n", pairs);
    }

    return 0;
}


int get_gcd(int a, int b)
{
    if(b==0) return a;
    return get_gcd(b, a%b);
}
