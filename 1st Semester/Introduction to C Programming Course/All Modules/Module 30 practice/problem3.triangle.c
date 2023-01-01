#include <stdio.h>

struct Point {
   float x, y;
};

struct Triangle {
   struct Point A;
   struct Point B;
   struct Point C;
};

struct Circle {
   struct Point C;
   float radius;
};

struct Point centroid(struct Triangle t)
{
   struct Point ans;
   ans.x = (t.A.x + t.B.x + t.C.x)/3;
   ans.y = (t.A.y + t.B.y + t.C.y)/3;
   return ans;
};

int main()
{
   struct Point x = {1,1};
   struct Point y = {4,5};
   struct Point z = {1,5};

   struct Triangle t = {x, y, z};

   struct Point cen = centroid(t);

   printf("The centroid is (%.2f, %.2f)\n", cen.x, cen.y);
   return 0;
}
