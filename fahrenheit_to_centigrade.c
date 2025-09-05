//Fahrenheit to Celsius converter

#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("Temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius = (((fahrenheit -32)*5)/9);
    printf("Temperature in Centigrade = %.2f",celsius);
    return 0;
}