// To find total number of seconds in given time
#include<stdio.h>
int main()
{
    int hr,min,sec,total_sec;
    printf("total number of hours: ");
    scanf("%d",&hr);
    printf("total number of mins: ");
    scanf("%d",&min);
    printf("total number of seconds: ");
    scanf("%d",&sec);
    total_sec = hr*3600 + min*60 + sec;
    printf("total time in seconds: %d ",total_sec);
    return 0;
}
