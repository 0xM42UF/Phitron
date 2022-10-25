#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);

    int hold = A - B;
    int Bottle2_remains = C - hold;

    if (Bottle2_remains <= 0)
    {
        printf("0");
    }
    else
    {
        printf("%d", Bottle2_remains);
    }
}
