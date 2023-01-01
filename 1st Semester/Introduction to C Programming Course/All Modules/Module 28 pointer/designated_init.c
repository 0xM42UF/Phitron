#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i;
   scanf("%d", &n);

   int* ptr;
   ptr = (int*) malloc(n*sizeof(int)); // to allocate memory in run time

   for(i=0; i<n; i++)
   {
      scanf("%d ", (ptr+i));
   }

   for(i=0; i<n; i++)
   {
      printf("%d th position -> %d\n", i, *(ptr+i));
   }

   return 0;
}
