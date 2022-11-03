#include <stdio.h>

int main()
{
  int N, i, arr[N], sum=0;

  scanf("%d ", &N);

  for (i = 0; i < N; i++){
    scanf("%d ", &arr[i]);
  }

  for (i = 0; i < N; i++){
    if(arr[i]%2 != 0){
      sum += arr[i];
    }
  }

  if(sum % 2 == 0)
    printf("YES");
  else
    printf("NO");

  return 0;
}
