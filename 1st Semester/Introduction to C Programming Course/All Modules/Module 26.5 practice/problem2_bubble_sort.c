#include <stdio.h>

void bubble_sort(int a[], int n);
void swap(int *x, int *y);

int main()
{
   int N,i;
   scanf("%d", &N);

   int a[N];
   for(i=0; i<N; i++)
   {
      scanf("%d ", &a[i]);
   }

   bubble_sort(a, N);

   printf("After sorting ~ ");
   for(i=0; i<N; i++)
   {
      printf("%d ", a[i]);
   }
   return 0;
}

void bubble_sort(int a[], int n)
{
   int i, j;
   for(i=0; i<n-1; i++)
   {
      for(j=i; j<n; j++)
      {
         if(a[i] > a[j])
            swap(&a[i], &a[j]);
      }
   }
}

void swap(int *x, int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}
