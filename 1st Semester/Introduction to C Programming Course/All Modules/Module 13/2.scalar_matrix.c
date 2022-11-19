#include <stdio.h>

int main()
{
   int row, col, i, j;
   printf("Provide row and col value of a scalar matrix\n");
   scanf("%d %d", &row, &col);

   int a[row][col];

   for(i=0; i<row; i++)
   {
      for(j=0; j<col; j++)
      {
         scanf("%d ", &a[i][j]);
      }
   }

   if(row==col)
   {
      int ans=1, x= a[0][0];
      for(i=0; i<row; i++)
      {
         for(j=0; j<col; j++)
         {
            if(i==j)
            {
               if(a[i][j] != x)
               {
                  ans = 0;
               }
               continue;
            }
            if(a[i][j] != 0)
            {
               ans = 0;
            }
         }
      }
      if(ans == 0)
      {
         printf("Not scalar \n");
      }
      else
      {
         printf("Scalar \n");
      }
   }
   else
   {
      printf("Not Scalar \n");
   }
   return 0;
}
