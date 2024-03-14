#include<stdio.h>
int main(){
    int num1,num2,min,i;
    printf("Enter two Number");
    scanf("%d%d",&num1,&num2);
    min = num1 < num2 ? num1 : num2; 
    
    for(i = min; i <= min; i--){
       if(num1 % i == 0 && num2 % i == 0){
           break;
        } 
       }
       if(i == 1){
        printf("Co-Prime Numbers");
       }
       else{
        printf("Not Co-Prime Numbers");
       }
    }