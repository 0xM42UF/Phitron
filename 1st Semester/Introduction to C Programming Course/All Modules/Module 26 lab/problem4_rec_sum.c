#include <stdio.h>

int Sn(int n);

int main()
{
   int N;
   scanf("%d", &N);

   int sum = Sn(N);
   printf("Sum = %d",sum);
   return 0;
}

int Sn(int n)
{
   if(n==1)
      return 1;
   else
   {
      return Sn(n-1) + n;
   }
}
