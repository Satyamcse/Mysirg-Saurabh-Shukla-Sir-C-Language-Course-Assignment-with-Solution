// TSRS
int Area(int);
#include<stdio.h>
int main(){
    int radius;
    printf("Enter Radius");
    scanf("%d",&radius);
    printf("Area is %d",Area(radius));
    return ;
}
int Area(int r){
    int result;
    result = 3.14 * r * r;
    return result;
}