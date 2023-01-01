#include <stdio.h>

struct Student{
   int roll;
   double weight;
};

int main()
{
   int i;
   struct Student s[10];
   /*
   s[0].roll = 11;
   s[0].weight = 53.5;

   s[1].roll = 02;
   s[1].weight = 63.5;
   */

   for(i=0; i<10; i++)
   {
      s[i].roll = 11+i;
      s[i].weight = 55.9+i*3;
   }

   for(i=0; i<10; i++)
      printf("%d th student roll = %d and weight = %.2lf\n",i, s[i].roll, s[i].weight);

   return 0;
}
