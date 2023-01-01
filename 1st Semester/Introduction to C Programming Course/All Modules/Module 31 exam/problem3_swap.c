#include <stdio.h>
void swap(int* x, int* y)
{
   // here int* x and int* y is a pointer type integer variable which will store the address of another variable
   int temp; // normal variable
   temp = *x; // storing the pointer x in temp (mainly *x value is an address)
   *x = *y; // storing the pointer y in pointer x (mainly *y value is also an address)
   *y = temp; // storing the temp value in pointer y (mainly temp value is also an address)
}

int summ(int a, int b)
{
   // here int a and int b in normal variable type which take the value
   return a+b; // returning the value after computation
}

int main()
{
   int a, b;
   a= 5; // normal value
   b = 10; // normal value

   // (pass-by-reference)
   swap(&a, &b); // passing the address of variable a and b
   printf("Value of a=%d and b=%d\n", a, b);  // printing the value of a and b

   // (pass-by-value)
   int v = summ(a, b); // passing the value of variable a and b
   printf("Sum of %d and %d is %d", a, b, v); // printing the value of a and b and summ
   return 0;
}
