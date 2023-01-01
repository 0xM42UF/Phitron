#include <stdio.h>

struct Student {
   int roll;
   char name[30];
   float weight;
   int age;
};

int main()
{
   struct Student s1 = {02, "Ariful Hasan", 63.5, 23};
   struct Student s2 = {31, "Salma Nawar", 70.5, 22};

   printf("Student 1 info : \n");
   printf("Name: %s, Roll = %d, Age = %d, Weight = %.2f\n", s1.name, s1.roll, s1.age, s1.weight);
   printf("\n");
   printf("Student 2 info : \n");
   printf("Name: %s, Roll = %d, Age = %d, Weight = %.2f\n", s2.name, s2.roll, s2.age, s2.weight);

   return 0;
}
