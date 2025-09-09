/*  Objective : To calculate gross salary

    Author : Sameer Yadav
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int basic_salary,hra,lta,sa,gross_salary;
    printf("Enter basic salary : ");
    scanf("%d",&basic_salary);
    printf("Enter house rent allowance : ");
    scanf("%d",&hra);
    printf("Enter leave and travel allowance : ");
    scanf("%d",&lta);
    printf("Enter special allowance : ");
    scanf("%d",&sa);
    gross_salary = basic_salary+hra+lta+sa;
    printf("Your gross salary is %d\n",gross_salary);
    system("pause");
    return 0;
}