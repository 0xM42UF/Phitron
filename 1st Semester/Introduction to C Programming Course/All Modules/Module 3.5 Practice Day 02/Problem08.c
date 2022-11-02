/*Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.*/
#include <stdio.h>
int main(void)
{
    float Farenheit;
    float Celsius;
    printf("Enter temperature in farenheit: ");
    scanf("%f", &Farenheit);
    Celsius = (Farenheit - 32) * 5 / 9;
    printf("Temperature in Celsius = %.2f C", Celsius);

    return 0;
}
