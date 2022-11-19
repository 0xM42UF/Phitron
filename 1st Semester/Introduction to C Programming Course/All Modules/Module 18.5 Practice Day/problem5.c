#include <stdio.h>

int main()
{
   char sign;
   scanf("%c", &sign);

   int a, b, num;
   scanf("%d %d", &a, &b);

   if(a > b)
   {
      if(sign == '+')
         num = a + b;
      else if(sign == '-')
         num = a - b;
      else if(sign == '*')
         num = a * b;
      else if (sign == '/')
         num = a / b;
   }
   else
   {
      if(sign == '+')
         num = a + b;
      else if(sign == '-')
         num = b - a;
      else if(sign == '*')
         num = a * b;
      else if (sign == '/')
         num = b / a;
   }

   printf("%d", num);
   return 0;
}
