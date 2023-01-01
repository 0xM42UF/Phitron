#include <stdio.h>
#include <math.h>

struct Point {
   int x;
   int y;
};

double distance(struct Point p, struct Point q)
{
   return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}

int main()
{
   struct Point p1,p2;
   printf("x and y of point 1\n");
   scanf("%d %d", &p1.x, &p1.y);
   printf("x and y of point 2\n");
   scanf("%d %d", &p2.x, &p2.y);


   printf("The distance between them = %.2lf\n", distance(p1,p2));

   return 0;
}
