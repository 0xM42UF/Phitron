#include <stdio.h>

int main() {
    char x;
    printf("Enter value ~ ");
    scanf("%c", &x);

    char y[] = x;
    printf("%c", y);

    return 0;
}

