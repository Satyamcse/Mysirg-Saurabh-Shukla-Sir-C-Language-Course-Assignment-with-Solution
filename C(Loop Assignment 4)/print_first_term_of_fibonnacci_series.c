#include<stdio.h>
int main(){
    int i,prev = 0, curt = 1, next,num;
    printf("Enter Number");
    scanf("%d",&num);
    for(i = 1; i < num; i++){
        prev = curt;
        curt = next;
        next = curt + prev;
    }
    printf("%d",next);
}