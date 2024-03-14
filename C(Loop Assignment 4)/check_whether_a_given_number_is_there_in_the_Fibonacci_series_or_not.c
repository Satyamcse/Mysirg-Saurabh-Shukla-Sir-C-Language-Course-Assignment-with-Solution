#include<stdio.h>
int main(){
    int i,prev = 0, curt = 1, next,num;
    printf("Enter Number");
    scanf("%d",&num);
    for(i = 0; i <= num; i++){
        prev = curt;
        curt = next;
        next = curt + prev;
        if(next == num){
            printf("Given number is under fibonacci");
            break;
        }
    }
        if(next != num){
            printf("Given number is without fibonacci series");
        }
}