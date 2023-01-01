#include <stdio.h>

int main()
{
   FILE *inputFile;
   inputFile = fopen("input.txt", "r");
   if(inputFile == NULL)
   {
      printf("No File Found\n");
      return 0;
   }
   FILE *outputFile;
   outputFile = fopen("output2.txt", "w");
   while(1)
   {
      char ch = fgetc(inputFile);
      if(ch==EOF) break;

      printf("%c", ch);
      fputc(ch, outputFile);
   }
   return 0;
}
