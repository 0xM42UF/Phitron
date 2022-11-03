#include <stdio.h>

int main()
{
  int N, k, i, arr[N], max ,count=0;

  scanf("%d", &N);

  for (i = 0; i < N; i++)
  {
    scanf("%d ", &arr[i]);
  }

  scanf("%d", &k);

  for(i = 0; i < N; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }

  int d_arr[max + 1];

  for(i = 0; i <= max ; i++){
    d_arr[i] = 0;
  }

  for (i = 0; i < N; i++)
  {
    d_arr[arr[i]] = 1;
  }

  for(i=0;i <= max; i++){
    if(d_arr[i] == 1) count++;
    if(count == k)
    {
        printf("%d", i);
        break;
    }
  }

  return 0;
}
