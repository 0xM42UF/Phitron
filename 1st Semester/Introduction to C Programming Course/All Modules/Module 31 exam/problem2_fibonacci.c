#include <stdio.h>

int main()
{
   int n, a=0, b=1, i=0;
   scanf("%d", &n);

   printf("%d, %d, ", a, b);
   for(i=2; i<n; i++)
   {
      printf("%d", a+b);
      if(i!= n-1)
         printf(", ");

      int temp;
      temp = a+b;
      a = b;
      b = temp;
   }

   return 0;
}
