#include <stdio.h>

float avgg(int *a, int *b);

int main()
{
   int a, b;
   scanf("%d %d", &a, &b);

   float av = avgg(&a, &b);
   printf("%f", av);
   return 0;
}

float avgg(int *a, int *b)
{
   float sum = *a + *b;
   float av = sum/2;
   return av;
}
