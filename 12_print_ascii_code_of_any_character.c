/*  Objective : To print ASCII code of any character

    Author : Sameer Yadav
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    char character;
    int ascii_code;
    printf("Enter your character : ");
    scanf("%c",&character);
    ascii_code = character;
    printf("\nThe ASCII code of the character is %d\n",ascii_code);
    system("pause");
    return 0;
}