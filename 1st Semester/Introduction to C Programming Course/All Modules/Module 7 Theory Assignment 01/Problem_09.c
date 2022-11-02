#include <stdio.h>

int main()
{
    int i, j;
    scanf("%d", &j);
    printf("The factors of %d are: ", j);
    for(i=1; i<=j; i++)
    {
        if(j % i == 0)
            {
                printf("%d,",i);
            }
    }
    return 0;
}
