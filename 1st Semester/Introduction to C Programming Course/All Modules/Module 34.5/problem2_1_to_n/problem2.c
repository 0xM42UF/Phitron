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

   for(int i=1; i<=n; i++)
   {
      fprintf(outputFile, "%d ", i);
   }

   printf("Work done\n");
   return 0;
}
