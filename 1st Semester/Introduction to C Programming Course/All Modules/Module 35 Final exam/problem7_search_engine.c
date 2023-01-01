#include <stdio.h>

int main()
{
   int T, j=1;
   scanf("%d", &T);

   while(j <= T)
   {
      int n, i, idx=-1;
      scanf("%d", &n);
      int a[n];
      for(i=0; i<n; i++)
         scanf("%d ", &a[i]);
      int s;
      scanf("%d", &s);

      for(i=0; i<n; i++)
      {
         if(a[i] == s)
         {
            idx = i;
            break;
         }
      }

      if(idx == -1)
      {
         printf("Case %d: Not Found\n", j);
      }
      else
      {
         printf("Case %d: %d\n", j, idx+1);
      }
      j++;
   }
   return 0;
}
