#include<stdio.h>
int main(){
    int num1,num2,max,min,i,j;
    printf("Enter Two Number");
    scanf("%d%d",&num1,&num2);
    max  = num1 > num2 ? num1 : num2;
    min =  num1 < num2 ? num1 : num2;
   for(i = min; i <= max; i++){
    for(j = 2; j < i; j++){
        if(i % j == 0){
            break;
        }
    }
    if(i == j){
        printf("%d ",j);
    }
 }
    
}