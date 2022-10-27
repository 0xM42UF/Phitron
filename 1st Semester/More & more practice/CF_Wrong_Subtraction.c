#include<stdio.h>
int main(){

    int n,k;
    scanf("%d %d",&n, &k);
    for( int x=1 ; x<=k  ; x++ )
    {
        int j = n%10;
        if(j==0){
            n = n/10;
        }
        else{
            n = n-1;
        }

    }
    printf("%d",n);




    return 0;
}
