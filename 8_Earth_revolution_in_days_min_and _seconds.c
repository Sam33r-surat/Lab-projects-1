#include<stdio.h>
#include<stdlib.h>
int main(){
    int rev,day,hour,min,sec;
    rev = 31558150;
    day = rev/(60*60*24);
    hour = (rev-day*60*60*24)/(60*60);
    min = (rev-(day*60*60*24)-(hour*60*60))/60;
    sec = (rev-(day*60*60*24)-(hour*60*60)-(min*60));
    printf("it takes earth %d seconds to complete one revolution around the sun\n",rev);
    printf("number of days : %d\n",day);
    printf("number of hours : %d\n",hour);
    printf("number of mins : %d\n",min);
    printf("number of seconds : %d\n",sec);
    system("pause");
    return 0;
}