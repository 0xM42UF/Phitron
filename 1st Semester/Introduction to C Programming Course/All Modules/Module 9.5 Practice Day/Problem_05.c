#include <stdio.h>

int main()
{
  int N, M, arr[N], i, out=0;
  printf("Enter total size of array: ");
  scanf("%d", &N);
  printf("Enter %d elements in the array: ", N);
  for ( i = 0; i < N; i++)
  {
    scanf("%d ", &arr[i]);
  }
  
  scanf("%d", &M);

  for (i = 0; i < N-1; i++){
    if((arr[i] + arr[i+1]) == M){
      out = 1;
      break;
    }
  }

  if(out == 0){
    printf("NO");
  }else {
    printf("YES");
  }

  return 0;
}