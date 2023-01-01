#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i;
   scanf("%d", &n);

   int* arr;
   arr = (int*) malloc(n* sizeof(int));

   if(arr==NULL)
      printf("Memory allocation failed!\n");
   else
   {
      printf("Provide %d elements of array\n", n);
      for(i=0; i<n; i++)
         scanf("%d ", arr+i);

      printf("Output array\n");
      for(i=0; i<n; i++)
         printf("%d ", *(arr+i));
   }
   return 0;
}
