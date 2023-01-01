#include <stdio.h>

void rec(int i, int n);

int main()
{
   int N;
   scanf("%d", &N);
   rec(1, N);
   return 0;
}

void rec(int i, int n)
{
   if(i==n)
   {
      printf("%d ", i);
   }
   else
   {
      printf("%d ", i);
      return rec(i+1, n);
   }
}
