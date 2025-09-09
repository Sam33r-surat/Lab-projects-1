/*  Objective : To read marks of five subjects and to calculate total marks and percentage
    
    Author : Sameer Yadav
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float math,phy,che,eng,paint,total,total_percent;
    printf("Enter marks of Mathematics: ");
    scanf("%f",&math);
    printf("Enter marks of Physics: ");
    scanf("%f",&phy);
    printf("Enter marks of Chemistry: ");
    scanf("%f",&che);
     printf("Enter marks of English: ");
    scanf("%f",&eng);
     printf("Enter marks of Painting: ");
    scanf("%f",&paint);
    if(math>100||phy>100||che>100||eng>100||paint>100){
        printf("entered marks are invalid \n");
        system("pause");
    }
    else{
    total = math + phy + che + eng + paint;
    total_percent = total/5;
    printf("Total marks = %.2f",total);
    printf("\nMarks in percentage = %.2f\n",total_percent);
    system("pause");
    return 0;
    }
}        