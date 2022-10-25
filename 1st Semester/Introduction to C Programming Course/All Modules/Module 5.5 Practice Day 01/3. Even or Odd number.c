//একটি প্রোগ্রাম লিখ যেটি কোন সংখ্যা জোড় না বিজোড় বলতে পারে।
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Even number!");
    }
    else
    {
        printf("Odd number!");
    }
    return 0;
}
