#include <stdio.h>

int main()
{
  int N, i, j, arr[N], rev[N];
  printf("Enter total size of array: ");
  scanf("%d ", &N);

  for (i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (i = N-1; i >= 0; i--){
    printf("%d ", arr[i]);
  }


    return 0;

}