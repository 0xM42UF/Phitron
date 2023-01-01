#include <stdio.h>

int find_max(int x, int y);

int main()
{
   int a,b;
   scanf("%d %d", &a, &b);

   int maxx = find_max(a, b);
   printf("Maximum number between %d and %d is %d", a, b, maxx);
   return 0;
}

int find_max(int x, int y)
{
   int val;
   val = x > y ? x : y;
   return val;
}
