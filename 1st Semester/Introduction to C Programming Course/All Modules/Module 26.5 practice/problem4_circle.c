#include <stdio.h>

float a_o_c(int R);

int main()
{
   int R;
   printf("Radius of circle = ");
   scanf("%d", &R);

   float area = a_o_c(R);
   printf("Area of circle = %f", area);
   return 0;
}

float a_o_c(int R)
{
   float pai = 3.1416;
   float area = pai*R*R;
   return area;
}
