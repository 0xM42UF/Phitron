#include <stdio.h>

int main()
{
   FILE* inputFile = fopen("input.txt", "r");
   FILE* outputFile = fopen("output.txt", "w");

   if(inputFile == NULL)
   {
      printf("No Input File Found\n");
      return 0;
   }

   int n;
   fscanf(inputFile, "%d", &n);

   int i, j;
   for(i=1; i<=n; i++)
   {
      for(j=n-i; j>=1; j--)
         fprintf(outputFile, " ");

      for(j=1; j<=n; j++)
         fprintf(outputFile, "#");

      fprintf(outputFile, "\n");
   }

   printf("Work done");
   return 0;
}
