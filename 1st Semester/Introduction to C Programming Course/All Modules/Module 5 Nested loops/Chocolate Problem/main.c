#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("The Number of chocolate: ");
    scanf("%d",&n);
    int choc = n;
    int pack = n;

    while(pack>=4)
    {
        choc += (pack/4);
        pack = (pack/4)+(pack%4);
    }
    printf("As many as i can get back: %d",choc);
    return 0;
}
