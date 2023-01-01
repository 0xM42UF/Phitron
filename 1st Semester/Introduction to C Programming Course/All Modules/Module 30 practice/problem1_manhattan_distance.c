#include <stdio.h>
#include <math.h>

struct Coordinate {
   int x, y;
};

int manhattan(struct Coordinate p1, struct Coordinate p2)
{
   return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}

int main()
{
   struct Coordinate p1;
   struct Coordinate p2;

   scanf("(%d,%d)\n", &p1.x, &p1.y);
   scanf("(%d,%d)", &p2.x, &p2.y);

   int ans = manhattan(p1,p2);
   printf("Manhattan distance is %d\n", ans);
   return 0;
}
