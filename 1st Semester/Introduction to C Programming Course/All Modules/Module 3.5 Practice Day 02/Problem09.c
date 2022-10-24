/*Write a C program to convert a given integer (in days) to years, months and days,
assuming that all months have 30 days and all years have 365 days.*/
#include <stdio.h>
int main(void)
{
    int years, months, days;
    printf("Input No. of days: ");
    scanf("%d", &days);
    years = days / 365; // 1 year=365 days;
    printf("%d Years\n", years);
    months = (days - (years * 365)) / 30; // 1 month=30 days;
    printf("%d Months\n", months);
    days = days - ((years * 365) + (months * 30));
    printf("%d Days", days);
    return 0;
}
