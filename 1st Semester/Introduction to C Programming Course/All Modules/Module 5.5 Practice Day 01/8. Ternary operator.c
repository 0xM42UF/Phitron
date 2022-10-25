/*উপরের প্রোগ্রামটি ternary operator দিয়ে লিখ। */
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    int num3 = (num1 > num2 ? num1 : num2);
    printf("%d", num3);
}
