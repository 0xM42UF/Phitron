#include <stdio.h>

int even_or_odd (num)
{
   if(num%2==0)
      return 1;
   else
      return 0;
}

int main()
{
   int n;
   printf("Enter a number to find odd or even: ");
   scanf("%d", &n);
   int val = even_or_odd(n);
   if(val == 1)
      printf("Even");
   else
      printf("Odd");
   return 0;
}
