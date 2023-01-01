#include <stdio.h>

void printNumbers(FILE* outputFile, int n);

int main()
{
   FILE* inputFile = fopen("input.txt", "r");
   FILE* outputFile = fopen("output.txt", "w");

   if(inputFile == NULL)
   {
      printf("No File Found\n");
      return 0;
   }

   int T;
   fscanf(inputFile, "%d", &T);

   for(int i=1; i<=T; i++)
   {
      int n;
      fscanf(inputFile, "%d", &n);
      printNumbers(outputFile, n);
   }

   printf("Work done\n");
   return 0;
}

void printNumbers(FILE* outputFile, int n)
{
   int i;
   if(n<0)
   {
      for(i=n; i<= -n; i++)
      {
         fprintf(outputFile, "%d ", i);
      }
      fprintf(outputFile, "\n");
   }
   else if(n>=0)
   {
      for(i=n; i>= -n; i--)
      {
         fprintf(outputFile, "%d ", i);
      }
      fprintf(outputFile, "\n");
   }
}
