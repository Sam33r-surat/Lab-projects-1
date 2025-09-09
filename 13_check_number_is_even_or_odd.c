#include<stdio.h>
#include<stdlib.h>
int main(){
    int input;
    printf("Enter number : ");
    scanf("%d",&input);
    if ((input%2)>0)
    {
    printf("the number is odd\n");
    system("pause");
    }
    else
    {
    printf("the number is even\n");
    system("pause");
    }
    return 0;
}