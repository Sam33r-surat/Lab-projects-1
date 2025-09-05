/*  The objective of this program is to calculate the area of a triangle while taking the sides of the triangle as user input
    
    Author: Sameer Yadav   
*/


#include<stdio.h>
#include<math.h>
int main(){
    float side1,side2,side3,s,area;
    printf("Enter the length of the 1st side of the triangle : ");
    scanf("%f",&side1);
    printf("Enter the length of the 2nd side of the triangle : ");
    scanf("%f",&side2);
    printf("Enter the length of the 3rd side of the triangle : ");
    scanf("%f",&side3);
    s = (side1 + side2 + side3)/2;
    area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    printf("area of the triangle is : %f",area);
    return 0;
}