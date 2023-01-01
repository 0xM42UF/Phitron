#include <stdio.h>

void is_prime(int n);

int main()
{
   int n;
   scanf("%d", &n);
   is_prime(n);
   return 0;
}

void is_prime(int n)
{
   int i;
   if(n==1)
   {
      printf("Not prime or composite number");
      return;
   }
   else
   {
      for(i=2; i<= n/2; i++)
      {
         if(n%i==0)
         {
            printf("Composite number");
            return;
         }

      }
      printf("Prime number");
   }

}
