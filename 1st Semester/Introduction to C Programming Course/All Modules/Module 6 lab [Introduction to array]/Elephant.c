#include<stdio.h>
int main(){

    int n,s;
    scanf("%d",&n);
    if(n%5==0)
    {
        s = n/5;
    }
    else
    {
        s = (n/5) + 1;
    }
    printf("%d",s);





    return 0;
}

