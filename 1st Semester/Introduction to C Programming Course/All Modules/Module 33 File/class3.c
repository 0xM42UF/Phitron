#include <stdio.h>

int main()
{
   FILE* inputFile;
   FILE* outputFile;
   inputFile = fopen("input.txt", "r");
   if(inputFile == NULL)
   {
      printf("No File Found\n");
      return 0;
   }
   outputFile = fopen("class3Output.txt", "w");

   int n;
   fscanf(inputFile,"%d", &n);
   int sum =0;

   for(int i=0; i<n; i++)
   {
      int a;
      fscanf(inputFile, "%d ", &a);
      sum += a;
   }
   fprintf(outputFile,"Sum -> %d", sum);

   return 0;
}
