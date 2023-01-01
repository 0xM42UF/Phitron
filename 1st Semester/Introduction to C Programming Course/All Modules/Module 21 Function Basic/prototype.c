#include <stdio.h>

int max_of_3(int a, int b, int c); // prototype function

int main()
{
   int x,y,z;
   printf("Enter 3 numbers : ");
   scanf("%d %d %d", &x, &y, &z);

   max_of_3(x, y, z);
   return 0;
}

int max_of_3(int a, int b, int c)
{
   if(a>b && a>c)
      printf("Max = %d\n", a);
   else if(b>a && b>c)
      printf("Max = %d\n", b);
   else
      printf("Max = %d\n", c);
}

