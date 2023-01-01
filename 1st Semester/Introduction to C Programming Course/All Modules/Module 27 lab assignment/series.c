#include <stdio.h>

void series(int n);

int main()
{
   int N;
   scanf("%d", &N);

   series(N);
   return 0;
}

void series(int n)
{
   int i, sum=0, flag=0;

   for(i=1; i<=n; i++)
   {
      if(flag%2==0)
         sum += i;
      else
         sum -= i;


      if(i%3 == 0)
         flag++;
   }

   printf("%d ", sum);
}
