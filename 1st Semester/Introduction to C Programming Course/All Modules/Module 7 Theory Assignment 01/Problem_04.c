#include<stdio.h>
int main()
{
  int a,b;
  int sum = 0;
  scanf("%d",&a);
  int v = a;
  while(v != 0)
  {
      b = v%10;

      sum += b;

      v = v/10;

  }
  printf("%d",sum);

  return 0;
}

