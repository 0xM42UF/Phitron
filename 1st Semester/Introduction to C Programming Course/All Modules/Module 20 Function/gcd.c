#include <stdio.h>

int gcd(int a, int b)
{
   int temp, i;
   if(a < b)
   {
      temp = b;
      b = a;
      a = temp;
   }

   for(i=a; i>=1; i--)
   {
      if(a%i == 0 && b%i ==0)
      {
         return i;
      }
   }
}

int main()
{
   int x, y;
   scanf("%d %d", &x, &y);
   int val = gcd(x, y);
   printf("%d", val);
   return 0;
}
