#include <stdio.h>

int main()
{
   FILE* inputFile = fopen("input.txt", "r");
   FILE* outputFile = fopen("output.txt", "w");

   if(inputFile == NULL)
   {
      printf("No Data File Found\n");
      return 0;
   }

   while(1)
   {
      char ch = fgetc(inputFile);
      if (ch == EOF) break;

      fputc(ch, outputFile);
   }
   printf("Work done\n");
   return 0;
}
