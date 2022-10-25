/*একটি প্রোগ্রাম লিখ যা ধনাত্মক সংখ্যা ইনপুট দিলে ১, শূন্য ইনপুট দিলে ০, আর নাইলে -১ প্রিন্ট করে।*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d", 1);
    }
    else if (num == 0)
    {
        printf("%d", 0);
    }
    else
    {
        printf("%d", -1);
    }
}
