#include <stdio.h>

int main()
{
   int N, i;
   scanf("%d", &N);

   int a[N];
   for(i=0; i<N; i++)
   {
      scanf("%d ", &a[i]);
   }

   int *p = &a[0];
   system("cls"); // to clean terminal previous writing
   printf("Print array using pointers : ");
   for(i=0; i<N; i++)
   {
      printf("%d ", *(p+i));
   }
   return 0;
}
