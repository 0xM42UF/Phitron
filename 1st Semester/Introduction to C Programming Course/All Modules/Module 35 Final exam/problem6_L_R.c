#include <stdio.h>

int isPrime(int n);

int main()
{
   int T, i, j;
   scanf("%d", &T);

   while(T--)
   {
      int l, r;
      scanf("%d %d", &l, &r);
      for(i=l; i<=r; i++)
      {
         isPrime(i) && printf("%d ", i);
      }
      printf("\n");
   }
   return 0;
}

int isPrime(int n)
{
   int i;
   if(n==1) return 1;
   for(i=2; i<=n/2; i++)
   {
      if(n%i == 0)
      {
         return 0;
      }
   }
   return 1;
}
