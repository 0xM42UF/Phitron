/*Write a C program to input temperature in Centigrade and convert to Fahrenheit.*/
#include <stdio.h>
int main(void)
{
    int Celsius;
    double Farenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &Celsius);
    Farenheit = (Celsius * 9 / 5) + 32;
    printf("Temperature in Farenheit = %0.1lf F", Farenheit);
    return 0;
}
