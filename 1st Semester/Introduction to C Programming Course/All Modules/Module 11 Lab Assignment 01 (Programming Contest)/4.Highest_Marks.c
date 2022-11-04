#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int s,m,i;
    scanf("%d",&s);
    int mark[s];
    for(i=0; i<s; i++)
    {
        scanf("%d",&mark[i]);
    }
    m = mark[0];
    for(i=0; i<s; i++)
    {
        if(mark[i]>m)
        {
            m = mark[i];
        }
    }
    for(i=0; i<s; i++)
    {
       int deff = m - mark[i];
       printf("%d ",deff);
    }
    return 0;
}
