#include <stdio.h>
#include <string.h>

int main()
{
   int i = 0, len=0;
   char s1[100];
   scanf("%s", s1);

   while(s1[i] != '\0')
   {
      i++;
      len++;
   }

   for(i=len-1; i>=0; i--)
   {
      printf("%c ", s1[i]);
   }
}
