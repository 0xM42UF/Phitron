#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int stu,hm,i;
    scanf("%d",&stu);
    int mark[stu];
    for(i=0; i<stu; i++)
    {
        scanf("%d",&mark[i]);
    }
    hm = mark[0];
    for(i=0; i<stu; i++)
    {
        if(mark[i]>hm)
        {
            hm = mark[i];
        }
    }
    for(i=0; i<stu; i++)
    {
       int r = hm - mark[i];
       printf("%d ",r);
    }
    return 0;
}
