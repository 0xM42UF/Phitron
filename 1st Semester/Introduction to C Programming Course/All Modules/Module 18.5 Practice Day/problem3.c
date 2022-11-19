#include <stdio.h>

int main()
{
   int N, i, sum=0;
   int arr[N];
   scanf("%d", &N);

   for(i=0; i<N; i++)
   {
      scanf("%d ", &arr[i]);
   }

   for(i=0; i<N; i++)
   {
      sum += arr[i] % 10;
   }
   printf("Sum = %d", sum);

   return 0;
}
