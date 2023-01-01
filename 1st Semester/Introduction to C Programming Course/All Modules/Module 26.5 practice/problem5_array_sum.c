#include <stdio.h>

int sum_all(int a[], int N);

int main()
{
   int N, i;
   scanf("%d", &N);

   int a[N];
   for(i=0; i<N; i++)
   {
      scanf("%d ", &a[i]);
   }

   int total = sum_all(a, N);
   printf("Total = %d", total);

   return 0;
}

int sum_all(int a[], int N)
{
   int sum=0, i;

   for(i=0; i<N; i++)
   {
      if(a[i]%10 == 0)
      {
         sum += a[i];
      }
   }

   return sum;
}
