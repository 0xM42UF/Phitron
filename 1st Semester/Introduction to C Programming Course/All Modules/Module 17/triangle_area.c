#include <stdio.h>

int main()
{
   int a, b, c;
   double s, area;
   printf("Enter three sides of a triangle: \n");
   scanf("%d %d %d", &a, &b, &c);

   s= (a+b+c)/2;
   printf("Half perimeter: %.2lf\n", s);

   area = sqrt(s*(s-a)*(s-b)*(s-c));
   printf("Area: %.2lf\n", area);

   return 0;
}
