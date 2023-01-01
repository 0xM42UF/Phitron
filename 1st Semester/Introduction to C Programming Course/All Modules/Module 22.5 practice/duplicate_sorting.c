#include <stdio.h>

// there is a bug in this code
void sort_arr(int a[],int max,int n);

int main()
{
   int N,i=0;
   scanf("%d", &N);
   int a[N];

   for(i=0; i<N; i++)
   {
      scanf("%d ", &a[i]);
   }
   int max= a[0];
   for(i=0; i<N; i++)
   {
      if(max < a[i])
         max = a[i];
   }

   sort_arr(a, max, N);
   return 0;
}

void sort_arr(int a[],int max, int n)
{
   int i;
   int d_arr[max];
   for(i=0; i<max; i++)
   {
      d_arr[i] = 0;
   }

   for(i=0; i<n; i++)
   {
      int idx = a[i];
      d_arr[idx]++;
   }

   for(i=0; i<=max; i++)
   {
      if(d_arr[i]==1)
      {
         printf("%d ", i);
      }
      else if (d_arr[i] > 1)
      {
         for(int j=0; j<d_arr[i]; j++)
         {
            printf("%d ", i);
         }
      }
   }
}
