#include <stdio.h>
#include <string.h>

int main()
{
   int m, i, j;
   char s[100];

   scanf("%d", &m);

   for(i=0; i<m; i++)
   {
      fgets(s, sizeof(s), stdin);
      printf("%s ", s);
   }

   return 0;
}
