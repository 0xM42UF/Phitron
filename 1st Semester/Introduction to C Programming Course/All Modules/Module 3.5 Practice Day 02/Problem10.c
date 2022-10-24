/*Write a C program that accepts two item�s weight (floating points' values ) and number of purchase (floating points' values)
and calculate the average value of the items.*/
#include <stdio.h>
int main()
{
    double WI1, NI1, WI2, NI2, result;

    printf("Weight - Item1: ");
    scanf("%lf", &WI1);

    printf("No. of item1: ");
    scanf("%lf", &NI1);

    printf("Weight - Item2: ");
    scanf("%lf", &WI2);

    printf("No. of item2: ");
    scanf("%lf", &NI2);

    result = ((WI1 * NI1) + (WI2 * NI2)) / (NI1 + NI2);
    printf("Average value: %lf\n", result);
    return 0;
}
