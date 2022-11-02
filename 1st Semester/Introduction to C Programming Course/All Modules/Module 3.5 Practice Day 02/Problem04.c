/*Write a C program to input principle, time and rate (P, T, R) from the user
and find Simple Interest and principal plus interest.*/
#include <stdio.h>
int main(void)
{
    int P, T;
    double R, SI, PI;
    printf("Enter principle: ");
    scanf("%d", &P);
    printf("Enter time: ");
    scanf("%d", &T);
    printf("Enter rate: ");
    scanf("%lf", &R);

    SI = P * T * R / 100;
    PI = P + SI;
    printf("Simple Interest= %lf\n", SI);
    printf("Principal+Interest= %0.1lf\n", PI);
    return 0;
}
