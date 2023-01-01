#include <stdio.h>

void find_parity(int x)
{
   if(x%2==0)
      printf("Even\n");
   else
      printf("Odd\n");
}

int main()
{
   int n;
   scanf("%d", &n);

   find_parity(n);
   return 0;
}
