#include <stdio.h>

void rec(int n);

int main()
{
   int N;
   scanf("%d", &N);
   rec(N);
   return 0;
}

void rec(int n)
{
   if(n==1)
      printf("%d", n);
   else
   {
      printf("%d ", n);
      return rec(n-1);
   }
}
