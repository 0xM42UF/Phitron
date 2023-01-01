#include <stdio.h>

void func(int x, int y, int* p, int* q);

int main()
{
   int a=5, b=12;
   int large, small;

   func(a,b, &large, &small);

   printf("Large = %d and Small = %d", large, small);

   return 0;
}

void func(int x, int y, int* p, int* q)
{
   *p = x>y?x:y;
   *q = x>y?y:x;
}
