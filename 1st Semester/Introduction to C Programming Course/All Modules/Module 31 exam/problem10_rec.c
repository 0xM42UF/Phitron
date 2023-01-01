#include <stdio.h>

int find_factorial(int n);

int main()
{
   int N=5;
   printf("Factorial value of %d is %d", N, find_factorial(N));
   return 0;
}

int find_factorial(int n)
{

   if(n==1) // base condition because it stops the function from executing endlessly
      return 1;
   else
      return n*find_factorial(n-1);
}
