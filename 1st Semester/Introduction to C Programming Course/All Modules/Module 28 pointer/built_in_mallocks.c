#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i;
   scanf("%d", &n);

   int* a;
   //a = (int*) malloc(n*sizeof(int));
   a = (int*) calloc(n,sizeof(int));

   if(a==NULL)
      printf("Memory Allocation Failed\n");
   else
   {
      for(i=0; i<n; i++)
      {
         scanf("%d ", (a + i));
      }
      for(i=0; i<n; i++)
      {
         printf("%d (a + i) th position -> %d\n",i, *(a + i));
         printf("%d a[i] th position -> %d\n",i, a[i]);
      }
   }

   free(a);
   return 0;
}
