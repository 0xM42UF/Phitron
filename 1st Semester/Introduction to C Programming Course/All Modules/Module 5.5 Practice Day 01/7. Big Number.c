/*দুটি সংখ্যা এর মধ্যে বড়টি বের করার জন্য প্রোগ্রাম লিখ।*/
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        printf("%d is greater than %d", num1, num2);
    }
    else
    {
        printf("%d is greater than %d", num2, num1);
    }
}
