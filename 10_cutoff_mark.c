/*  Objective : To calculate cutoff marks taking marks of 4 subjects as input 

    Author : Sameer Yadav
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    float phy,che,math,eng,cutoff;
    printf("Enter marks of Mathematics : ");
    scanf("%f",&phy);
    printf("Enter marks of Physics : ");
    scanf("%f",&phy);
    printf("Enter marks of Chemistry : ");
    scanf("%f",&che);
    printf("Enter marks of English : ");
    scanf("%f",&eng);
    if((phy<=200.0)&&(che<=200.0)&&(math<=200.0)&&(eng<=100.0)){
    cutoff =(math/2.0)+(phy/2.0)+(che/2.0)+eng;
    printf("Cutoff marks are : %.1f\n",cutoff);
    system("pause");
    }
    else{
    printf("The entered values are more than the maximum marks\n");
    system("pause");
    }
    return 0;
}