/*একটি প্রোগ্রাম লিখ যা ১oo তে মার্ক ইনপুট নিয়ে গ্রেড আউটপুট দিতে পারে।  এখানে গ্রেড এর টেবিল দেওয়া হল।*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number not more than 100: ");
    scanf("%d", &num);
    if (num >= 80 && num <= 100)
    {
        printf("You have got A+.");
    }
    else if (num >= 70 && num <= 79)
    {
        printf("You have got A.");
    }
    else if (num >= 60 && num <= 69)
    {
        printf("You have got B.");
    }
    else if (num >= 50 && num <= 59)
    {
        printf("You have got C.");
    }
    else if (num >= 40 && num <= 49)
    {
        printf("You have got D.");
    }
    else
    {
        printf("You have got F.");
    }
}
