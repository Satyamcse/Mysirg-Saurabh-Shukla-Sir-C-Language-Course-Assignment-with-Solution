/* WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area 
& R with radius. */

#include<stdio.h>
int main(){
   float R, A;
    printf("Enter Radius");
    scanf("%f",&R);
    A = 3.14*R*R;
    A = A+R;
    R = A-R;
    A = A-R;
    printf("Value of Area is %f and Radius is %f",A,R);
    return 0;
}