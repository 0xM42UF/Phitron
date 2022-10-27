//Write a C program to take one positive integer N
//as input and print all even numbers from 1 to N.
#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    for(int x=1 ; x<=n ; x++  ){
            if(x%2==0){
                printf("%d ",x);

            }


    }







    return 0;
}
