#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int choc = n;
    int pack = n;
    for(int i = 1; pack>=4; i++)
    {
        choc = choc + (pack/4);
        pack = (pack/4) + (pack%4);
    }
    printf("%d",choc);
    return 0;
}
