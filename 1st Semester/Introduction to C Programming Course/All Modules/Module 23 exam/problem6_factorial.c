#include <stdio.h>

int factorial(int f1);
int two_factorial(int f1, int f2);

int main()
{
   int f1;
   scanf("%d", &f1);

   int a = factorial(f1);
   printf("Factorial = %d\n", a);

   int f2, f3;
   scanf("%d %d", &f2, &f3);
   int b = two_factorial(f2, f3);
   printf("Factorial ratio = %d", b);

   return 0;
}

int factorial(int f1)
{
   int i=1, x=1;
   for(i=1; i<=f1; i++)
   {
      x *= i;
   }
   return x;
}

int two_factorial(int f1, int f2)
{
   int first = factorial(f1);
   int second = factorial(f2);

   int ratio = first / second;
   return ratio;
}
