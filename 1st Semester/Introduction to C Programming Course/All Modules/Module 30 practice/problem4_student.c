#include <stdio.h>

struct Student {
   int roll;
   char name[20];
   double marks;
};

void printStudent (int n, struct Student s) {

   printf("Information of Student %d\n", n);
   printf("Roll -> %d  ", s.roll);
   printf("Name -> %s  ", s.name);
   printf("Marks -> %lf  ", s.marks);
   printf("\n");
}

int main()
{
   int i;
   struct Student cls[5];

   for(i=1; i<=5; i++)
   {
      scanf("%d", &cls[i].roll);
      scanf("%s", &cls[i].name);
      scanf("%lf", &cls[i].marks);
   }

   double summ=0;
   for(i=1; i<=5; i++)
   {
      if (cls[i].roll % 2 == 0)
      {
         printStudent(i, cls[i]);
         summ += cls[i].marks;
      }

   }

   printf("Total marks = %.2lf\n", summ);

   return 0;
}

/*
15
totul
85.6

14
raisa
90.2

16
ayesha
83.4

14
shuvo
84.7

18
tanjila
45.9
*/
