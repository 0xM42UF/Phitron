#include <stdio.h>

int my_func(int n);

int main()
{
   int n;
   scanf("%d", &n);
   my_func(n);
   return 0;
}

int my_func(int n)
{
   int i;
   if(n<0)
   {
      for(i=n; i<=n*(-1); i++)
         printf("%d ", i);
   }
   else
   {
      for(i=n; i>=n*(-1); i--)
         printf("%d ", i);
   }
   return 0;
}
