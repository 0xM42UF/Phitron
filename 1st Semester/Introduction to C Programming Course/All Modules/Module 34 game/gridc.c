#include <stdio.h>
#include <stdbool.h>

void printCell(int a[][4], int n);
int invalidCell (int a[][4], int r, int c);
int isWin (int a[][4], int n);

int main()
{
   int n = 3, i, j;
   int a[4][4];

   for(i=1; i<=n; i++)
   {
      for(j=1; j<=n; j++)
      {
         a[i][j] = -1;
      }
   }

   bool plr1 = true;
   bool plr2 = false;

   while(true)
   {
      printCell(a, n);
      if(plr1)
      {
         int r,c;
         Flag:
         printf("Player 1 Turn (X), Enter Row and Column : ");
         scanf("%d %d", &r, &c);
         int is_invalid = invalidCell(a, r, c);
         if (!is_invalid)
         {
            a[r][c] = 1;
            plr1=false;
            plr2=true;
         }
         else
            goto Flag;
      }
      else
      {
         int r,c;
         Flag2:
         printf("Player 2 Turn (0), Enter Row and Column : ");
         scanf("%d %d", &r, &c);
         int is_invalid = invalidCell(a, r, c);
         if (!is_invalid)
         {
            a[r][c] = 2;
            plr2=false;
            plr1=true;
         }
         else
            goto Flag2;
      }

      if(isWin(a, n) == 1)
      {
         printf("Player 1 Won!\n");
         printCell(a, n);
         break;
      }
      else if(isWin(a, n) == 2)
      {
         printf("Player 2 Won!\n");
         printCell(a, n);
         break;
      }
   }

   return 0;
}

void printCell(int a[][4], int n)
{
   int i, j;
   for(i=1; i<=n; i++)
   {
      for(j=1; j<=n; j++)
      {
         if(a[i][j] == -1)printf(" ");
         if(a[i][j] == 1)printf("X");
         if(a[i][j] == 2)printf("   O   ");
         if(j<n) printf("\t|\t");
      }
      printf("\n");
      if(i<n) printf("______________________________________");
      printf("\n\n");
   }
}

int invalidCell (int a[][4], int r, int c)
{
   if(a[r][c] != -1)
   {
      printf("Invalid Cell. Provide different row and column.\n");
      return 1;
   }
   return 0;
}

int isWin (int a[][4], int n)
{
   for(int i=1; i<=n; i++)
   {
      if( a[i][1] != -1 && a[i][1] == a[i][2] && a[i][2] == a[i][3])
      {
         return a[i][1];
      }
   }
   for(int i=1; i<=n; i++)
   {
      if(a[1][i] != -1 && a[1][i] == a[2][i] && a[2][i] == a[3][i])
      {
         return a[1][i];
      }
   }

   if(a[1][1] != -1 && a[1][1] == a[2][2] && a[1][1] == a[3][3])
      return a[1][1];


   if(a[1][3] != -1 && a[1][3] == a[2][2] && a[1][3] == a[3][1])
      return a[1][1];

   return -1;
}
