#include <stdio.h>

int main()
{
   int N;
   printf("Year = ");
   scanf("%d", &N);

   if((N % 4 == 0 && N % 100 != 0) || N % 400 == 0)
      printf("YES");
   else
      printf("NO");
   return 0;
}
