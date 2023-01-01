#include <stdio.h>

struct Student {
   char name[20];
   int roll;
   float marks;
};

int main()
{
   struct Student s1;

   printf("Enter information:\n");
   printf("Enter name: ");
   scanf("%s", &s1.name);

   printf("Enter roll number: ");
   scanf("%d", &s1.roll);

   printf("Enter marks: ");
   scanf("%f", &s1.marks);
   printf("\n");

   printf("Displaying information: \nName: %s\nRoll number: %d\nMarks: %.0f\n", s1.name, s1.roll, s1.marks);

   return 0;
}
