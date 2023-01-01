#include <stdio.h>

int sum_fuc(int a[], int n);

int main()
{
   int N, i;
   scanf("%d", &N);

   int a[N+1];
   for(i=1; i<=N; i++)
   {
      scanf("%d ", &a[i]);
   }

   int s = sum_fuc(a, N);
   printf("%d ", s);
   return 0;
}

int sum_fuc(int a[], int n)
{
   int sum=0, i;

   for(i=1; i<=n; i++)
   {
      if(i%2==0 && a[i]%2==0)
         sum = sum + i + a[i];
      else if(i%2==1 && a[i]%2==1)
         sum = sum + i + a[i];
   }

   return sum;
}
