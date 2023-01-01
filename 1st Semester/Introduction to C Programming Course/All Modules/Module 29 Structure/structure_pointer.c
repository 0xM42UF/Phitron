#include <stdio.h>

struct Student{
   double weight;
   int roll;
};

int main()
{
   struct Student s1 = {.roll=02, .weight=63.5};
   struct Student s2 = {.roll=31, .weight=65.5};
   struct Student* sp;

   sp=&s1;


   printf("Student roll = %d and weight = %.2lf\n", sp->roll, sp->weight);



   return 0;
}

