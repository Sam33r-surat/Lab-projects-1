/*  Objective : To swap two variable without the third variable 

    Author : Sameer Yadav
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int first,second;
    printf("Enter value of first variable : ");
    scanf("%d",&first);
    printf("Enter value of second variable : ");
    scanf("%d",&second);
    first = first + second;
    second = first - second;
    first = first - second;
    printf("swapped value of first variable is %d\n",first);
    printf("swapped value of second variable is %d\n",second);
    system("pause");
    return 0;
}