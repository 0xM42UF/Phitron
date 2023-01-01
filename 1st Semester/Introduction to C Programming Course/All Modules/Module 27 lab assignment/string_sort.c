#include <stdio.h>
#include <string.h>

void swap(char *x, char *y);
void bubble_sort(char a[100],int len);

int main()
{
   char s[100];
   scanf("%s", &s);

   int n = strlen(s);

   bubble_sort(s, n);

   for(int i=0; i<n; i++)
      printf("%c", s[i]);

   return 0;
}

void bubble_sort(char a[100],int len)
{
   int i,j;
   for(i=0; i<len-1; i++)
   {
      for(j=i; j<len; j++)
      {
         if(a[i] < a[j])
            swap(&a[i], &a[j]);
      }
   }
}

void swap(char *x, char *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}
