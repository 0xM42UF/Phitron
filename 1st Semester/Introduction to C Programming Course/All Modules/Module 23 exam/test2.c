#include <stdio.h>

void transpose(int a[3][3]);

int main()
{
    int N=3, M=3, i, j;

    int a[N][M];
    printf("Provide %dx%d matrix\n", N, M);
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    transpose(a);
    return 0;
}

void transpose(int a[3][3])
{
    int i, j;
    printf("Transpose Matrix\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
