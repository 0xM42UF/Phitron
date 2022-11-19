#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int damo;
    scanf("%d",&damo);
    for(int T = damo ; 0 < T ; T--)
    {
        char x[25];
        char y[25];
        int a,b;
        scanf("%s",x);
        int flag=1;
        for(a=0, b=strlen(x)-1; a<strlen(x); a++, b--)
        {
            y[b]=x[a];
        }
        for(a=0,b=0;a<strlen(x);a++,b++)
        {
            if(y[b]!=x[a])
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            if(strlen(x)>7)
            {
                printf("Case #2: %c%ld%c\n",x[0],strlen(x)-2,x[strlen(x)-1]);

            }
            else
            {
                printf("Case #3: %s\n",x);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome\n");
        }

    }
    return 0;
}
