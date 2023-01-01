#include <stdio.h>
#include <time.h>

int main()
{
   time_t tm;
   time(&tm);

   FILE* logFile = fopen("log.txt", "a");
   FILE* inputFile = fopen("no exist.txt", "r");
   if(inputFile == NULL)
   {
      fprintf(logFile, "Input file not found at %s", ctime(&tm));
      return 0;
   }
   return 0;
}
