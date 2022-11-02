#include <stdio.h>

int main()
{
  int N, q, i, v, arr[N], j, z;

  printf("Enter total size of array: ");
  scanf("%d", &N);

  for (j = 0; j < N; j++)
  {
    scanf("%d", &arr[j]);
  }

  printf("Enter total no of queries: ");
  scanf("%d", &q);

  for (j = 0; j < q; j++){
    scanf("%d %d", &i, &v);
      arr[i] = arr[i] + v;
  }

  for(j = 0; j < N; j++){
    printf("%d ", arr[j]);
  }

    return 0;
}