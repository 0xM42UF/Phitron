#include <stdio.h>;

int main()
{
    long long int a,b;
    scanf("%lld",&a);
    for(b = 0 ; a != 0 ; b++)
        {
            a = a/10;
        }
    printf("%d digits",b);
    return 0;
}
