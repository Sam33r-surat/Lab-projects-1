/*  Objective : To convert total number of seconds into days,hours,mins and seconds 

    Author : Sameer Yadav
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int total_second,day,hour,min,sec;
    printf("Time in number of seconds : ");
    scanf("%d",&total_second);
    if(total_second>=(24*60*60))
    {
    day = total_second/(24*60*60);
    hour = (total_second-(day*24*60*60))/(60*60);
    min = (total_second-(day*24*60*60)-(hour*60*60))/(60);
    sec = total_second -(day*24*60*60)-(hour*60*60)-(min*60);
    printf("\nnumber of days : %d\n",day);
    printf("number of hour : %d\n",hour);
    printf("number of min : %d\n",min);
    printf("number of sec : %d\n",sec);
    system("pause");
    }
    else 
    {
    hour = (total_second/(60*60));
    min = (total_second-(day*24*60*60)-(hour*60*60))/(60);
    sec = total_second -(day*24*60*60)-(hour*60*60)-(min*60);
    printf("\nnumber of hour : %d\n",hour);
    printf("number of min : %d\n",min);
    printf("number of sec : %d\n",sec);
    system("pause");
    }
    return 0;
}