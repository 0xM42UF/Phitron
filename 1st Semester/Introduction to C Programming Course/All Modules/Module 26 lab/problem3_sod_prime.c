#include <stdio.h>

int sum_of_digits(int N);
int is_prime(int n);

int main()
{
   int N;
   scanf("%d", &N);

   int sod = sum_of_digits(N);
   int prime = is_prime(sod);

   printf("Sum of digits is ");
   prime ? printf("Prime") : printf("Not prime");
   return 0;
}

int sum_of_digits(int N)
{
   int sum=0;
   while(N > 0)
   {
      sum += N%10;
      N /= 10;
   }

   return sum;
}

int is_prime(int n)
{
   if(n==1)
      return 0;
   else {
      for(int i=2; i<=n/2; i++)
      {
         if(n%i == 0)
         {
            return 0;
         }
      }
      return 1;
   }
}
