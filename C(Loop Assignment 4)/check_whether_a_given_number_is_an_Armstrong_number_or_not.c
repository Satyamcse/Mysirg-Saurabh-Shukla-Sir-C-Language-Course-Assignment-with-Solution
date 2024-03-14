#include<stdio.h>
int main(){
    int num,rem,sum = 0,n;
    printf("Enter Number");
    scanf("%d",&num);
    n = num;
    while(num > 0){
    rem = num % 10;
    sum = sum + (rem * rem * rem); 
    num = num / 10;
    }
    if(n == sum){
        printf("%d is Armstrong Number",n);
    }
    else{
        printf("%d is not Armstrong Number",n);
    }
}