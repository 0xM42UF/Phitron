#include <stdio.h>

int factorial(int n);
int nPr(int n, int r);
int nCr(int n, int r);

int main()
{
   int n, i, x=5, y=2;
   scanf("%d", &n);
   printf("Factorial of %d = %d\n",n, factorial(n));
   printf("nPr of %d & %d = %d\n",x, y, nPr(x, y));
   printf("nCr of %d & %d = %d\n",x, y, nCr(x, y));
   return 0;
}

int factorial(int n)
{
   int fact = 1, i;

   for(i=1; i<=n; i++)
      fact *= i;

   return fact;
}

int nPr(int n, int r)
{
   int nPr;
   nPr = factorial(n) / factorial(n-r);
   return nPr;
}


int nCr(int n, int r)
{
   int nCr;
   nCr = nPr(n, r) / factorial(r);
   return nCr;
}
