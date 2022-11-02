#include <stdio.h>

int main() {
  int N, i, j,out=1;
    
    printf("Enter total array size: ");
    scanf("%d",&N);
  int a[N];
    for(i=0;i<N;i++){
      scanf("%d", &a[i]);
    }
    
    int item1= a[0];
    
    for(i=0;i<N;i++){
      if(item1 != a[i]){
         out = 0;
      }
     }
     
     if(out){
       printf("YES");
     } else {
       printf("NO");
     }
     
  return 0;
}
