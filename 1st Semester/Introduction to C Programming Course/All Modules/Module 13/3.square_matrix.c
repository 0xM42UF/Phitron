#include <stdio.h>

int main()
{
   int row, col, i, j;
   printf("Provide row and col \n");
   scanf("%d %d", &row, &col);

   int a[row][col];

   printf("Provide matrix value \n");
   for(i=0; i<row; i++)
   {
      for(j=0; j<col; j++)
      {
         scanf("%d ", &a[i][j]);
      }
   }

   if(row == col)
   {
      int ans=1;
      for(i=0; i<row; i++)
      {
         for(j=0; j<col; j++)
         {
            if(i==j)
            {
               continue;
            }
            if(a[i][j] != 0)
            {
               ans = 0;
            }
         }
      }
      if(ans == 0){
         printf("Not Diagonal \n");
      }else {
         printf("Diagonal \n");
      }
   }
   else
   {
      printf("Not Diagonal");
   }
   return 0;
}
