/*Write a C program to input two numbers and perform all arithmetic operations to find sum, difference,
product, quotient and modulus of two given numbers*/
#include <stdio.h>
int main(void)
{
    int num1, num2, Sum, Diff, Pro, Quot, Modulus;
    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);
    Sum = num1 + num2;
    printf("Sum: %d\n", Sum);
    Diff = num1 - num2;
    printf("Diff: %d\n", Diff);
    Pro = num1 * num2;
    printf("Pro: %d\n", Pro);
    Quot = num1 / num2;
    printf("Quot: %d\n", Quot);
    Modulus = num1 % num2;
    printf("Modulus: %d\n", Modulus);

    return 0;
}
