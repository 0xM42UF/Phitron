
#include <stdio.h>

int rec_sum(int n, int sum);

int main()
{
   int N;
   scanf("%d", &N);

   int v = rec_sum(N, 0);
   printf("Sum = %d", v);
   return 0;
}

int rec_sum(int n, int sum)
{
   if(n > 0)
   {
      sum += n;
      return rec_sum(n - 1, sum);
   }
   return sum;
}
