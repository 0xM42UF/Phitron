
#include<stdio.h>
int main()
{
    int i, n, lar,sma, m=4;
    scanf ("%d", &n);
    lar = n;
    sma = n;
    for (i=1; i<= m -1 ; i++)
    {
        printf ("");
        scanf ("%d",&n);
        if (n>lar)
            {
                lar=n;
            }

        if (n<sma)
            {
                sma=n;
            }
    }
    printf ("largest %d ", lar);
    printf ("Smallest %d ", sma);
    return 0;
}
