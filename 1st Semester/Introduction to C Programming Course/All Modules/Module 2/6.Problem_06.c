/*
Write a c program to take integer value as input and print that value.There's a twist
! The input will contain a % sign.
Input:                       output:
20%                            20
*/
#include<stdio.h>
int main(){
    int a;
    printf("Enter an integer with %% sign : ");
    scanf("%d",&a);
    printf("You entered = %d\n",a); 
    return 0;
}