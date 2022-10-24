/*Write a C program that takes a positive float number and outputs its integer part and real part.*/
#include <stdio.h>
int main(void)
{
    double num, result;
    printf("Enter Number: ");
    scanf("%lf", &num);
    int a = (int)num;
    result = num - a;
    printf("Integer part: %d\nReal part: %.3lf", a, result);
    return 0;
}
