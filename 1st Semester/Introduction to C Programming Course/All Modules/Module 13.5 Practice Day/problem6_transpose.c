#include <stdio.h>

int main()
{  int N, M, i, j;
   scanf("%d %d", &N, &M);

   int a[N][M];
   for(i=0; i<N; i++)
   {
      for(j=0; j<M; j++)
      {
         scanf("%d ", &a[i][j]);
      }
   }

   for(i=0; i<N; i++)
   {
      for(j=0; j<M; j++)
      {
         printf("%d ", a[j][i]);
      }
      printf("\n");
   }

   return 0;
}
