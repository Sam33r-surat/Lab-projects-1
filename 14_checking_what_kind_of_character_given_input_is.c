/*  Objective : To find out what kind of characts is given by the user

    Author : Sameer Yadav
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    char input;
    int ascii;
    printf("Enter a single character : ");
    scanf("%c",&input);
    ascii = input;
    if((48<=ascii)&&(ascii<=57))
    {
     printf("Entered character is a digit\n");   
     system("pause");
    }
    else if((65<=ascii)&&(ascii<=90))
    {
     printf("Entered character is a capital letter\n");
     system("pause");
    }
    else if((97<=ascii)&&(ascii<=122))
    {
     printf("Entered character is a small letter\n");
     system("pause");   
    }
    else
    {
     printf("Entered character is a special symbol\n");
     system("pause");  
    }  
    
    return 0;
}