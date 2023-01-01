#include <stdio.h>

struct i_num {
   double real;
   double img;
};

void printComp(struct i_num c)
{
   printf("%0.2lf + %.2lfi", c.real, c.img);
}

struct i_num add_comp(struct i_num a, struct i_num b)
{
   struct i_num ans;
   ans.real = a.real + b.real;
   ans.img= a.img + b.img;
   printf("Summation = ");
   return ans;
};

struct i_num multi_comp(struct i_num a, struct i_num b)
{
   struct i_num mult;
   mult.real = a.real*b.real - a.img*b.img;
   mult.img = a.real*b.img + b.real*a.img;
   printf("Multiplication = ");
   return mult;
};
int main()
{
   struct i_num c1 = {5.9, 3.1};
   struct i_num c2 = {-2.5, 3.7};


   printComp(add_comp(c1, c2));
   printf("\n");
   printComp(multi_comp(c1, c2));
   return 0;
}
