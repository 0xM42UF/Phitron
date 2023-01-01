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

   int n, sum=0;
   fscanf(inputFile, "%d", &n);


   for(int i=0; i<n; i++)
   {
      int dig;
      fscanf(inputFile, "%d ", &dig);
      sum += dig%10;
   }
   fprintf(outputFile, "Sum = %d", sum);
   printf("Work done\n");

   return 0;
}
