/*আমরা একটা প্রোগ্রাম লিখেছিলাম যেটা a op b আকারের মান বের করতে পারে। ওটাকে এমনভাবে আপডেট কর যেন ওটা % অপারেটর এর জন্যও কাজ করে আর 0 দিয়ে ভাগ বা % করতে গেলে “Cannot divide by 0” print দেয়।*/
#include <stdio.h>
int main()
{
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '%':
        printf("%d", a % b);
        break;
    default:
        printf("Cannot divided by 0");
    }
}
