void decimal_to_binary(int);
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    decimal_to_binary(num);
    return 0;
}
void decimal_to_binary(int n){
    if(n > 0){
        decimal_to_binary(n/2);
        printf("%d",n%2);
    }
}