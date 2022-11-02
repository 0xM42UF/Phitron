#include <stdio.h>

int main()
{
  int N, i, arr[N], j, z;

  printf("Enter total size of array: ");
  scanf("%d", &N);

  for ( i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Result: \n");
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; j++){
      if(i == j){
        printf("%d - ", arr[i]);
      }
    }
    for (j = 0; j < N; j++){
      if(arr[i] != arr[j]){
        printf("%d ", arr[j]);
      }
    }
    printf("\n");
  }

    return 0;
}