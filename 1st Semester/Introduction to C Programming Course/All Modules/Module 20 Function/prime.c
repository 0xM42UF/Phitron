#include <stdio.h>

int is_prime(int n)
{
    int x, i;
    if(n == 1)
        return 0;

    for(i=2; i<=n/2; i++)
    {
        if(n%i == 0)
            return 0;

    }
    return 1;
}

int main()
{
    int a, prime;
    scanf("%d", &a);

    prime = is_prime(a);

    if(prime==1)
        printf("%d is a prime number.\n", a);
    else
        printf("%d is a composite number.\n", a);
    return 0;
}
