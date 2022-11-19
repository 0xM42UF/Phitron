#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,count = 1,max = 1;
    scanf("%d",&a);

    char b[101];
    scanf("%s",b);

    for(int i=1;i<a;i++)
    {
        if(b[i]==b[i-1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if(max <= count)
        {
            max = count;
        }
    }
    printf("%d",max);
    return 0;
}
