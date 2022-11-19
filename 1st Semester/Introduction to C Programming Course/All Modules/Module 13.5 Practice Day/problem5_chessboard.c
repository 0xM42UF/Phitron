#include <stdio.h>

int main()
{
    int R, x=1, y=1, i=1, j=1;
    scanf("%d", &R);

    int a[3][3], b[3][3];
    for (i=1; i<=3; i++)
    {
        for (j=1; j<=3; j++)
        {
            a[i][j] = 0;
        }
    }

    for (j=1; j<=R; j++)
    {
        scanf("%d %d", &x, &y);
        a[x][y] = 1;
    }

    printf("Total empty cells - %d\n", 9-R);
    for (i=1; i<=3; i++)
    {
        for (j=1; j<=3; j++)
        {
            if(a[i][j] != 1)
            {
                printf("%d %d", i, j);
                printf("\n");
            }
        }

    }


    return 0;
}
