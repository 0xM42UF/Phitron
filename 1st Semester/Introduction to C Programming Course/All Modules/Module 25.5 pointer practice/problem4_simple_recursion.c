#include <stdio.h>

void recursion(int n);

int main()
{
   int N;
   scanf("%d", &N);

   recursion(N);
   return 0;
}

void recursion(int n)
{
   if(n==1)
      printf("1");
   else
   {
      printf("%d ", n);
      return recursion(n - 1);
   }
}
