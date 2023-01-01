#include <stdio.h>
#include <math.h>

int has_7(int n);
int dg_sum(int n);
int last_dig_prime(int n);

int main()
{
   int n;
   scanf("%d", &n);

   if(has_7(n) == 1 && dg_sum(n)>10 && last_dig_prime(n) ==1)
      printf("Farhan's Number\n");
   else
      printf("No\n");

   return 0;
}

int has_7(int n)
{
   while(n>0)
   {
      if (n%10 == 7)
         return 1;

      n /= 10;
   }

}

int dg_sum(int n)
{
   int s = 0;
   while(n>0)
   {
      s += (n%10);
      n /=10;
   }
   return s;
}

int last_dig_prime(int n)
{
   int ld = n%10;
   if(ld == 2 || ld == 3 || ld == 5 || ld == 7)
      return 1;
   else
      return 0;
}
