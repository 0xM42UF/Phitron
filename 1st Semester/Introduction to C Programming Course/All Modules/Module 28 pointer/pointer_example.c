#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i;
   n=5;

   int* ptr;
   ptr = (int*) malloc(n*sizeof(int));
   printf("%p\n", ptr);

   if(ptr==NULL)
   {
      printf("Memory Allocation Failed in malloc\n");
      return 0;
   }

   for(i=0; i<n; i++)
   {
      scanf("%d ", (ptr+i));
   }
   for(i=0; i<n; i++)
   {
      printf("%d, ", *(ptr+i));
   }

   n=10;
   ptr = realloc(ptr, n*sizeof(int));
   printf("%p\n", ptr);

   if(ptr==NULL)
   {
      printf("Memory Allocation Failed realloc\n");
      return 0;
   }

   for(i=5; i<n; i++)
   {
      scanf("%d ", (ptr+i));
   }
   for(i=0; i<n; i++)
   {
      printf("%d,", *(ptr+i));
   }

   free(ptr);
   return 0;
}
