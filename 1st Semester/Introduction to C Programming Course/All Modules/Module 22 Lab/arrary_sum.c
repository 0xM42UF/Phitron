#include <stdio.h>

int add_them(int N,int a[]);

int main()
{
   int a[] = {13,74,174,234,4,3,6,345,54};
   int N = sizeof(a)/sizeof(a[0]);

   int sum = add_them(N, a);
   printf("%d", sum);
   return 0;
}

int add_them(int N,int a[])
{
   int sum = 0;

   for(int i=0; i<N; i++)
   {
      sum += a[i];
   }

   return sum;
}
