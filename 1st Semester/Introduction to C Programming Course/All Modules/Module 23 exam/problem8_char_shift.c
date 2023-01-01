#include <stdio.h>

void char_shift(char s[100],int N);

int main()
{
   int N;
   char s[100];

   scanf("%s", &s);
   scanf("%d", &N);

   char_shift(s, N);

   return 0;
}

void char_shift(char s[100],int N)
{
   int i=0;
   while(s[i]!= '\0')
   {
      if(s[i]>= 'a' && s[i]<= 'z')
      {
         int val = s[i] += N;
         if(val > 122)
         {
            int v = s[i] - 122;
            int c = 97 + v -1;
            printf("%c", c);
         }
         else
         {
            printf("%c", val);
         }
      }
      i++;
   }
}



