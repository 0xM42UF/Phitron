#include <stdio.h>

void alter_case(char s[100]);

int main()
{
   char s[100];
   scanf("%s", s);
   alter_case(s);
   return 0;
}

void alter_case(char w[100])
{
   int i=0;
   while(w[i]!='\0')
   {
      if(w[i] >= 'a' && w[i]<= 'z')
         printf("%c", w[i] -= 32);
      else if(w[i] >= 'A' && w[i]<= 'Z')
         printf("%c", w[i] += 32);

      i++;
   }
}
