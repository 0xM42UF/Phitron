#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character to get the ASCII value ~ ");
    scanf("%c", &a);

    int num = a;
    printf("ASCII value of %c = %d",a, num);

    return 0;
}
