#include <stdio.h>

void prime_patterns(int x);
int is_prime(int y);

int main()
{
   int N;
   scanf("%d", &N);
   prime_patterns(N);
   return 0;
}

void prime_patterns(int x)
{
   int i=1, j=1, flag=1;

   for(i=1; i<=x; i++)
   {
      j=1;
      while(j<=i)
      {
         int prime = is_prime(flag);
         if (prime == 1)
         {
            printf("%d ", flag);
            j++;
         }
         flag++;
      }
      printf("\n");
   }
   return;
}

int is_prime(int y)
{
   if(y==1)
   {
      return 0;
   }
   else
   {
      for(int i=2; i<=y/2; i++)
      {
         if(y%i == 0)
         {
            return 0;
         }
      }
      return 1;
   }
}
