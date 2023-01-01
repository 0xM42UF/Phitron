#include <stdio.h>

void print_hash(int n);

int main()
{
   int N, i;

   scanf("%d", &N);

   for(i=1; i<=N; i++)
      print_hash(i);

   return 0;
}

void print_hash(int n)
{
   int i=0;

   for(i=1; i<=n; i++)
   {
      printf("#");
   }
      printf("\n");


}
