#include <stdio.h>

int main()
{
   char s[100];
   scanf("%s", &s);

   int a[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

   int i=0;
   while(s[i] != '\0')
   {
      if(s[i] >= 'a' && s[i] <= 'z')
      {
         a[s[i]-97]++;
      }
      i++;
   }
   for(i=0; i<27; i++)
      printf("%d,", a[i]);

   printf("\n");
   for(i=0; i<27; i++)
   {
      if(a[i]>0)
      {
         for(int j=1; j<=a[i]; j++)
            printf("%c", 97+i);
      }
   }
   return 0;
}
