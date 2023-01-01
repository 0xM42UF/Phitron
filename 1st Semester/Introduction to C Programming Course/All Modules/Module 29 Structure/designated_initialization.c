#include <stdio.h>

struct Student {
   int roll;
   char name[30];
   float weight;
   int age;
};

int main()
{
   struct Student s1 = {.weight=63.5, .roll=02, .age=23, .name="Ariful Hasan"}; //designated
   struct Student s2 = {.name="Salma Nawar", .roll=31, .age=22, .weight=70.5};

   printf("Student 1 info : \n");
   printf("Name: %s, Roll = %d, Age = %d, Weight = %.2f\n", s1.name, s1.roll, s1.age, s1.weight);
   printf("\n");
   printf("Student 2 info : \n");
   printf("Name: %s, Roll = %d, Age = %d, Weight = %.2f\n", s2.name, s2.roll, s2.age, s2.weight);

   return 0;
}
