#include <stdio.h>

struct Student {
   double marks;
   //char name[20];
   int roll;
};

struct Student_copy {
   //char name[20];
   int roll;
   double marks;
};

int main()
{

   printf("%d\n", sizeof(struct Student));
   printf("%d", sizeof(struct Student_copy));
   return 0;
}
