#include <stdio.h>

int main()
{
   int n=3, m=3, i, j;
   int a[n][m], b[n][m];

   printf("Matrix 1 :\n");
   for(i=0; i<n; i++)
   {
      for(j=0; j<m ; j++)
      {
         scanf("%d ", &a[i][j]);
      }
   }
   printf("Matrix 2 :\n");
   for(i=0; i<n; i++)
   {
      for(j=0; j<m ; j++)
      {
         scanf("%d ", &b[i][j]);
      }
   }

   printf("Summ of matrix 1 and 2 :\n");
   for(i=0; i<n; i++)
   {
      for(j=0; j<m ; j++)
      {
         printf("%d ", a[i][j]+b[i][j]);
      }
      printf("\n");
   }
   return 0;
}
