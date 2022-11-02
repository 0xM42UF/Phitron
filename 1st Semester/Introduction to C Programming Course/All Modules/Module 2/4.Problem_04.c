/*
Write a c program to take two positive integer as input and show the summation,
substraction and multipliction of those two numbers.
Input:                       output:
5 3                            8 2 15
*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("%d ",a+b);
    printf("%d ",a-b);
    printf("%d \n",a*b);
    return 0;
}