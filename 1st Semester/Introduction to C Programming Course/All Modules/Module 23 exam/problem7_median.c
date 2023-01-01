#include <stdio.h>

int main()
{
   int i=0, j=0, N;
   printf("Give array size = ");
   scanf("%d", &N);
   int a[N];
   printf("Provide total %d int numbers\n");
   for(i=0; i<N; i++)
   {
      scanf("%d ", &a[i]);
   }

   int temp;
   for(i=0; i<N-1; i++)
   {
      for(j=i; j<N; j++)
      {
         if(a[j] < a[i])
         {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
         }
      }
   }

   for(i=0; i<N; i++)
   {
      printf("%d ", a[i]);
   }

   if(N%2==1)
      printf("Median = %d", a[N/2]);
   else
   {
      int half = N/2;
      float sum = a[half] + a[half+1];
      printf("Median = %.2f", sum/2);
   }
   return 0;
}
