#include<stdio.h>
int main(){
  int num1,num2,i;
  printf("Enter Number");
  scanf("%d%d",&num1,&num2);
  for(i = 2; i <= num1 * num2; i++){
    if(i % num1 == 0 && i % num2 == 0){
        printf("%d",i);
        break;
    }
  }
}