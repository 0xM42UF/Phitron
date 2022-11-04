#include <stdio.h>
int main()
{
    int i,p,r,count=0;
    scanf("%d",&p);
    scanf("%d",&r);
    int s[p];
    for(i=0;i<p;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<p;i++)
    {
        if(s[i]<r)
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
