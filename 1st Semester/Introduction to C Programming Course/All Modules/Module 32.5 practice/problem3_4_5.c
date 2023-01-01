#include <stdio.h>

void rec_1_N(int i, int n);
void rec_N_1(int n);
int sum_1_N(int summ, int n);

int main()
{
   int N;
   scanf("%d", &N);

   printf("Printing 1 to N numbers  >>  ");
   rec_1_N(1, N);
   printf("\n");
   printf("Printing N to 1 numbers  >>  ");
   rec_N_1(N);
   printf("\n");
   int ans = sum_1_N(0, N);
   printf("Printing sum of N to 1 numbers  >>  %d", ans);
   return 0;
}

void rec_1_N(int i, int n)
{
   if(i<= n)
   {
      printf("%d ", i);
      return rec_1_N(i+1, n);
   }
}

void rec_N_1(int n)
{
   if(n>0)
   {
      printf("%d ", n);
      return rec_N_1(n-1);
   }
}

int sum_1_N(int summ, int n)
{
   if(n==0)
      return summ;
   else
   {
      summ += n;
      return sum_1_N(summ, n-1);
   }
}



