#include <stdio.h>

int main()
{
   FILE* inputFile = fopen("input.txt", "r");
   FILE* outputFile = fopen("class5Output.txt", "w");

   int n;
   fscanf(inputFile, "%d", &n);
   fprintf(outputFile, "%d\n", n);

   fclose(inputFile);
   fclose(outputFile);

   return 0;
}
