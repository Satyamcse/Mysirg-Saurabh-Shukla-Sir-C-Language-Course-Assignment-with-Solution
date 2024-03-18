void decimal_to_octal(int);
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    decimal_to_octal(num);
    return 0;
}
void decimal_to_octal(int n){
    if(n > 0){
        decimal_to_octal(n/8);
        printf("%d",n%8);
    }
}