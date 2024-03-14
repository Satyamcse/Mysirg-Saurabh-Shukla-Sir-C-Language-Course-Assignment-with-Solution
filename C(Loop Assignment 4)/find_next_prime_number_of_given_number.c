#include<stdio.h>
int main(){
    int num,j;
    printf("Enter Number");
    scanf("%d",&num);
    num = num + 1;
     while(1){
        for(j = 2; j < num; j++){
            if(num % j == 0){
                break;
            }
        }
    if(j == num){
        printf("%d",num);
        break;
    }
    num++;
  }
}