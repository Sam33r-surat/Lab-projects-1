/*  Objective : To find out the division of a student achieved given the marks of 5 subjects
 

    Author : Sameer Yadav
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    float percent; 
    printf("Enter marks of subject 1 : ");
    scanf("%d",&sub1);
    printf("Enter marks of subject 2 : ");
    scanf("%d",&sub2);
    printf("Enter marks of subject 3 : ");
    scanf("%d",&sub3);
    printf("Enter marks of subject 4 : ");
    scanf("%d",&sub4);
    printf("Enter marks of subject 5 : ");
    scanf("%d",&sub5);
    if ((sub1>100)||(sub2>100)||(sub3>100)||(sub4>100)||(sub5>100))
    {
        printf("entered marks are invalid \n");
        system("pause");
    }            
   percent = ((sub1+sub2+sub3+sub4+sub5)/5);
   if(percent>=60)
   {
   printf("Your division is 1st\n");
   system("pause");
   }
   else if(50<=percent<60)
   {
    printf("Your division is 2nd\n");
    system("pause");
   }
    else
    {
        printf("Your division is 3rd\n");
        system("pause");
    }
    return 0;
    }
