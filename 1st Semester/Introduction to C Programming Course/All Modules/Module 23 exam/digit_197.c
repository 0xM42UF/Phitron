#include <stdio.h>

void available_197(long long int N);

int main()
{
   long long int N;
   scanf("%lld", &N);

   available_197(N);

   return 0;
}

void available_197(long long int N)
{
   int i=0, a=0, b=0, c=0;
   while(N > 0)
   {
      if(N%10 == 1)
         a=1;
      else if(N%10 == 7)
         b=1;
      else if(N%10 == 9)
         c=1;


      N /= 10;
   }

   if (a == 1 && b == 1 && c == 1)
      printf("Yes");
   else
      printf("No");
}
