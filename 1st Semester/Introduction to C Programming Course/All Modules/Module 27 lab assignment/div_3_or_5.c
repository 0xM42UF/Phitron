#include <stdio.h>

int div_3(int a[], int n);
int div_5(int a[], int n);
int div_3_5(int a[], int n);

int main()
{
   int N,i, sum=0;
   scanf("%d", &N);
   int a[N];
   for(i=0; i<N; i++)
   {
      scanf("%d ", &a[i]);
   }

   int s1 = div_3(a, N);
   int s2 = div_5(a, N);
   int s3 = div_3_5(a, N);

   sum = s1+s2+s3;

   if(sum == 0)
      printf("-1");
   else
      printf("%d", sum);

   return 0;
}

int div_3(int a[], int n)
{
   int i, sum=0;

   for(i=0; i<n; i++)
   {
      if(a[i]%3==0 && a[i]%5!=0)
         sum++;
   }
   return sum;
}

int div_5(int a[], int n)
{
   int i, sum=0;

   for(i=0; i<n; i++)
   {
      if(a[i]%5==0 && a[i]%3!=0)
         sum++;
   }
   return sum;
}

int div_3_5(int a[], int n)
{
   int i, sum=0;

   for(i=0; i<n; i++)
   {
      if(a[i]%3==0 && a[i]%5==0)
         sum++;
   }
   return sum;
}
