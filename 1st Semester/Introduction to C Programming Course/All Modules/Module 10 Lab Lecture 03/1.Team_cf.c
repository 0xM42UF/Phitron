//https://codeforces.com/problemset/problem/231/A
#include <stdio.h>

int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    int solved = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b+c>=2)
            solved++;
    }
    printf("%d",solved);

    return 0;
}
