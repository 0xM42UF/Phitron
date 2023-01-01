#include <stdio.h>

void is_binary_string(char w[1000]);

int main()
{
   char s[1000];
   scanf("%s", &s);

   is_binary_string(s);
   return 0;
}


void is_binary_string(char w[1000])
{
   int i=0;

   while(w[i]!='\0')
   {
      if(w[i] != '0' && w[i] != '1')
      {
         printf("NO");
         return;
      }
      i++;
   }
   printf("YES");
   return;
}
