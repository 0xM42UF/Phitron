#include <stdio.h>

int string_cost(char s[100]);
int is_pow_of_two(int n);

int main()
{
   char s[100];
   scanf("%s", &s);

   int cost = string_cost(s);
   printf("Cost = %d\n", cost);
   int power = is_pow_of_two(cost);
   if(power == 0)
      printf("NO");
   else
      printf("YES \ncost = 2^%d", power);
   return 0;
}

int string_cost(char s[100])
{
   int i=0, cost=0;

   while(s[i]!='\0')
   {
      if(s[i] >= 'a' && s[i]<= 'z')
      {
         int val = s[i] - 96;
         cost += val;
      }
      i++;
   }
   return cost;
}

int is_pow_of_two(int n)
{
   int p=0;
   if(n==0)
      return 0;
   while(n != 1)
   {
      if(n%2 == 0)
         p++;
      else
         return 0;
      n/=2;
   }

   return p;
}
