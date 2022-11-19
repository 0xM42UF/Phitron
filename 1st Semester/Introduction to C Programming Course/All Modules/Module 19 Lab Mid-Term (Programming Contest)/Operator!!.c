#include <stdio.h>
int main()
{
    char str[21];
    scanf("%s", str);
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '+')
        {
            sum = sum + (a + b);
        }
        else
        {
            sum = sum + (a * b);
        }
    }
    printf("%d\n", sum);

    return 0;
}
