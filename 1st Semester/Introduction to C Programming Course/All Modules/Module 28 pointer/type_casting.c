#include <stdio.h>

int main()
{
   int a=7;
   double b;
   char c = 'a';
   int* pi;
   double* pd;

   b= (double)25/4;

   pi = &a;
   pd = (double*)pi;

   printf("%d %lf %c", a, b, c);
   printf("%d %lf\n", a, b);
   printf("%p %p\n", pi, pd);

   return 0;

}
