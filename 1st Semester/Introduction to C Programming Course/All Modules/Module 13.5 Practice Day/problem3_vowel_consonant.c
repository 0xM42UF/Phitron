#include <stdio.h>
#include <string.h>

int main()
{
   int i=0, vc=0, cc=0;

   char s[100];
   printf("Give word : ");
   scanf("%s", &s);

   while(s[i]!= '\0')
   {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
      {
         vc++;
      }
      else
      {
         cc++;
      }
      i++;
   }
   printf("Vowel - %d\nConsonant - %d", vc, cc);
   return 0;
}
