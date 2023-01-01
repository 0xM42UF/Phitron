#include <stdio.h>

int is_beatiful(int a[], int n);

int main()
{
   int N, i;
   scanf("%d", &N);

   int a[N];
   for(i=0; i<N; i++)
   {
      scanf("%d ", &a[i]);
   }
   int beauty = is_beatiful(a, N);
   beauty ? printf("Beautiful\n") : printf("Ugly\n");
   return 0;
}

int is_beatiful(int a[], int n)
{
   int count=0, i=0, half=n/2;
   int *ar = &a[0];
   for(i=0; i<n; i++)
   {
      int num = *(ar+i);
      while(num > 0)
      {
         if(num%10==7)
            count++;

         num/=10;
      }
   }
   if(count >= half)
      return 1;
   else
      return 0;
}
