#include <stdio.h>

int total_nums(int a[], int n, int k);

int main()
{
   int N, k, i;
   scanf("%d", &N);
   int a[N];

   for(i=0; i<N; i++)
   {
      scanf("%d ", &a[i]);
   }
   scanf("%d", &k);

   int ans = total_nums(a, N, k);

   printf("%d", ans);
   return 0;
}

int total_nums(int a[], int n, int k)
{
   int count=0, i;

   for(i=0; i<n; i++)
   {
      if(a[i] != k)
         count++;
   }

   return count;
}

