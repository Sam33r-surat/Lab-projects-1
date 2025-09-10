/*  Objective : Fahrenheit to Celsius converter
    Author : Sameer Yadav
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float fahrenheit,celsius;
    printf("Temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius = (((fahrenheit -32)*5)/9);
    printf("Temperature in Centigrade = %.2f",celsius);
    printf("\n");
    system("pause");
    return 0;
}