#include <stdio.h>

int main()
{
   int N, i, j;

   scanf("%d ", &N);

   for(i=N;i>=1;i--){

      for(j=1;j<=i;j++){
         printf("%d ", j);
      }
      printf("\n");
      for(j=N-1;j>=i-1;j--)
      {
         printf(" ");
      }
   }

   return 0;
}
