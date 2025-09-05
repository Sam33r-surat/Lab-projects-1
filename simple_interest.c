//To calculate simple interest given the principal amount, interest, time(in years)


#include<stdio.h>
int main()
{
    float p,r,t,i;
   
    printf("Principle amount is: ");
    scanf("%f",&p);
    printf("Interest rate is: ");
    scanf("%f",&r);
    printf("Time (in years) for which interest is to be calculated: ");
    scanf("%f",&t);
    i = ((p*r*t)/100);
    printf("interest =%.2f",i);
    return 0;
}