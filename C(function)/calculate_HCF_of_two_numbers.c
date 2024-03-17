// TSRS
#include<stdio.h>
int HCF(int,int);
int main(){
    int n1,n2;
    printf("Enter Number");
    scanf("%d%d",&n1,&n2);
    printf("HCF is %d",HCF(n1,n2));
    return 0;
}
int HCF(int num1,int num2){
    int i,min;
    min = num1 > num2 ? num1 : num2;
    for(i = min; i <= min; i--){
        if(num1 % i == 0 && num2 % i == 0){
            return i;
        }
    }
}