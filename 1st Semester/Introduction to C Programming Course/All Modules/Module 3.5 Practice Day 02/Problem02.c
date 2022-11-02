/*Write a C program that accepts two integers from the user and calculate the product of the two integers.*/
#include <stdio.h>
int main(void)
{
    int num1, num2, num3;
    printf("Input the first integer: ");
    scanf("%d", &num1);
    printf("Input the second integer: ");
    scanf("%d", &num2);
    num3 = num1 * num2;
    printf("Expected Output:\nProduct of the above two integers = %d", num3);
    return 0;
}
