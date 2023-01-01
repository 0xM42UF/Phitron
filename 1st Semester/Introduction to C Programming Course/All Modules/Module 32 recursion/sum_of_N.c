#include <stdio.h>

int sum_rec(int sum, int n);

int main()
{
   int N;
   scanf("%d", &N);

   printf("%d", sum_rec(0, N));
   return 0;
}

int sum_rec(int sum, int n)
{
   if(n==1)
      return sum += 1;
   else
   {
      sum += n;
      return sum_rec(sum, n-1);
   }
}
