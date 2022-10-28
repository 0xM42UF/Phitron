#include <stdio.h>;

int main()
{
    int fst,snd;
    scanf("%d %d",&fst,&snd);
    if(fst%snd==0)
        {
            printf("The first number is divisible by the second number. ");
        }
    else if(snd%fst==0)
        {
            printf("The second number is divisible by the first number.  ");
        }
    else
        {
            printf("None of them are divisible by the other. ");
        }
    return 0;
}
