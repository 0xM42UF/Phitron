#include <stdio.h>
#include <string.h>

int main()
{
   int i=0;
   char s1[100], s2[100];
   printf("First word : ");
   scanf("%s", &s1);

   int len = strlen(s1);

   printf("Second word : ");
   scanf("%s", &s2);

   while(s1[i] != '\0' && s2[i] != '\0')
   {
      s1[len+i] = s2[i];
      i++;
   }

   puts(s1);
   return 0;
}
