#include <stdio.h>

void find_max_min(int a[], int len, int *p, int *q);

int main()
{
   int a[] = {12, 5, 7, 3, 56, 98, 78};
   int len = sizeof(a)/sizeof(a[0]);
   int maxx, minn;

   find_max_min(a, len, &maxx, &minn);
   printf("Max = %d, Min = %d", maxx, minn);
   return 0;
}


void find_max_min(int a[], int len, int *p, int *q)
{
   *p = a[0];
   *q = a[0];

   for(int i=0; i<len; i++)
   {
      if(*p < a[i])
         *p = a[i];

      if(*q > a[i])
         *q = a[i];

   }
}
