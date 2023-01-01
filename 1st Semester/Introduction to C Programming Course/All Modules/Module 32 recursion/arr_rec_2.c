#include <stdio.h>

int solve(int ar[], int n)
{
   if(n==0) return 0;
   int s = solve(ar+1, n-1);
   return s+ar[0];
}

int main()
{
   int N;
   scanf("%d", &N);
   int a[N];
   for(int i=0; i<N; i++)
   {
      scanf("%d ",&a[i]);
   }
   int s = solve(a, N);
   printf("%d", s);
   return 0;
}
