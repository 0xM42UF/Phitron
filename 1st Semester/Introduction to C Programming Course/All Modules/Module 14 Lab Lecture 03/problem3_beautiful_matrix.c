#include <stdio.h>

int main()
{
   int i, j, temp, x, y, ans=0;
   int a[5][5];

   for(i=0; i<5; i++)
   {
      for(j=0; j<5; j++)
      {
         scanf("%d ", &a[i][j]);
         if(a[i][j] == 1)
         {
            x=i;
            y=j;
         }
      }
   }

   if(x>2)
      ans += (x -2);
   else
      ans += (2-x);

   if(y>2)
      ans += (y-2);
   else
      ans += (2-y);

   printf("%d", ans);
   return 0;
}
