#include <stdio.h>

void swap(int *x, int *y);

int main()
{
   int N, i;
   scanf("%d", &N);
   int a[N+1];
   for(i=1; i<=N; i++)
   {
      scanf("%d ", &a[i]);
   }

   int Q;
   scanf("%d", &Q);

   while(Q--)
   {
      int L, R;
      scanf("%d %d", &L, &R);
      swap(&a[L], &a[R]);
      for(i=1; i<=N; i++)
      {
         printf("%d ", a[i]);
      }
      printf("\n");
   }

   return 0;
}

void swap(int *x, int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}
