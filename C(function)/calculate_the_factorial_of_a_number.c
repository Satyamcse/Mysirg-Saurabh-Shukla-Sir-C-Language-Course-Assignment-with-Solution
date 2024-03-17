// TSRS
int factorial(int);
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    printf("Factorial is %d",factorial(num));
    return 0;
}
int factorial(int n){
    int fact = 1,i;
    for(i = 1; i <= n; i++){
        fact = fact * i; 
    }
    return fact;
}