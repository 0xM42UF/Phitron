#include <stdio.h>

int arr_sum(int arr[], int i, int n)
{
   if(i==n) return 0;
   int summ = arr_sum(arr, i+1, n);
   return summ += arr[i];
}

int main()
{
   int N;
   scanf("%d", &N);

   int arr[N];
   for(int i=0; i<N; i++)
   {
      scanf("%d ", &arr[i]);
   }
   int s = arr_sum(arr, 0, N);
   printf("%d", s);
   return 0;
}
