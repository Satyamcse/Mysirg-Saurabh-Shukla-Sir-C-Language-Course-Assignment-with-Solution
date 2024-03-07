#include<stdio.h>
int main(){
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    printf("Unit digit id %d",num%10);
    return 0;
}