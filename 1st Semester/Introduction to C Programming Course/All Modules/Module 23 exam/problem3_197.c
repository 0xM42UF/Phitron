#include <stdio.h>

void available_197(char N[100]);

int main()
{
   char N[100];
   scanf("%s", &N);

   available_197(N);

   return 0;
}

void available_197(char N[100])
{
   int i=0, a=0, b=0, c=0;
   while(N[i]!= '\0')
   {
      if(N[i] == '1')
         a=1;
      else if(N[i] == '7')
         b=1;
      else if(N[i] == '9')
         c=1;

      i++;
   }
   if(a==1 && b==1 && c==1)
      printf("Yes");
   else
      printf("No");
}
