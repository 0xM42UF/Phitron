#include <stdio.h>

long add(long *, long *, long*);

int main()
{
   long first, second, third, *p, *q, sum;

   printf("Input three integers to add\n");
   scanf("%ld %ld %ld", &first, &second, &third);

   sum = add(&first, &second, &third);

   printf("(%ld) + (%ld) + (%ld) = (%ld)\n", first, second, third, sum);

   return 0;
}

long add(long *x, long *y, long *z) {
   long sum;

   sum = *x + *y + *z;

   return sum;
}
