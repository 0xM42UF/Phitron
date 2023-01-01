#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);

   (n%4==0 && n%100!=0) || n%400==0 ? printf("Yes") : printf("No");

   return 0;
}
