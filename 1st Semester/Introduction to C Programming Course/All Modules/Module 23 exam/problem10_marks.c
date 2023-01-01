#include <stdio.h>

void grade(int n);

int main()
{
    int N;
    scanf("%d", &N);

    grade(N);
    return 0;
}

void grade(int n)
{
    if(n>=80 && n<=100)
        printf("A");
    else if(n>=60 && n<=79)
        printf("B");
    if(n>=40 && n<=59)
        printf("C");
    else if(n>=0 && n<=39)
        printf("F");
}
