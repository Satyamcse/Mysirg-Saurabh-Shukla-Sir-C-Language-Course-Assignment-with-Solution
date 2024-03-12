#include<stdio.h>
int main(){
    float A,R;
    printf("Enter Radius");
    scanf("%f",&R);
    A = 3.14*R*R;
    A = A + R;
    R = A - R;
    A = A - R;
    printf("Area is %f and Radius is %f",A,R);
    return 0;
}