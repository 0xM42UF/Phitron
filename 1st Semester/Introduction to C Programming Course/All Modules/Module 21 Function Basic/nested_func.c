#include <stdio.h>
#include <math.h>

float f(int x, int y);
int absolute(int x);
int square(int x);

int main()
{
   int x, y;
   x=12; y=7;
   float ans;
   ans = f(x,y);
   printf("%f\n", ans);
   return 0;
}

float f(int x, int y)
{
   int temp_ans = absolute(x-3) + square(y+4);
   return sqrt(temp_ans);
}

int absolute(int x)
{
   if(x<=0)
      return x*(-1);
   else
      return x;
}

int square(int z)
{
   return z*z;
}
