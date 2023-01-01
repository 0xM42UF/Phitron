#include <stdio.h>

void change_str(char a[100]);

int main()
{
   char s[100];
   scanf("%s", &s);

   change_str(s);
   return 0;
}

void change_str(char a[100])
{
   int i=0;
   while(a[i] != '\0')
   {
      if(a[i]>= 'a' && a[i]<='z' && a[i]%2==0)
      {
         a[i] -= 32;
      }
      i++;
   }
   puts(a);
}
