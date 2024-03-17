// TSRN
void odd_natural_number(int);
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    odd_natural_number(num);
    return 0;
}
void odd_natural_number(int n){
    int i;
    for(i = 1; i <= 2*n; i++){
        if(i % 2){
          printf("%d ",i);
        }
    }
}