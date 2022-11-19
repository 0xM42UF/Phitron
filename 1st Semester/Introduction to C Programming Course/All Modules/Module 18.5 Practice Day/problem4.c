#include <stdio.h>

int main()
{
   int i=0;
   char s[100], c;
   scanf("%s", &s);

   while(s[i]!= '\0')
   {
      if(s[i] != c)
      {
         printf("%c", s[i]);
         c = s[i];
      }
      i++;
   }
   return 0;
}
