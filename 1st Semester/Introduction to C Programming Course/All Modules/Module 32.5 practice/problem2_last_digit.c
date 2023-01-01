#include <stdio.h>

int last_digit_rec(int a[], int i, int len, int summ);

int main()
{
   int T, i;
   scanf("%d", &T);
   int arr[T];
   for(i=0; i<T; i++)
      scanf("%d ", &arr[i]);

   int ans = last_digit_rec(arr, 0, T, 0);
   printf("%d", ans);
   return 0;
}

int last_digit_rec(int a[], int i, int len, int summ)
{
   if(i==len) return summ;
   else
   {
      int last_digit = a[i]%10;
      summ += last_digit;
      return last_digit_rec(a, i+1, len, summ);
   }
}
