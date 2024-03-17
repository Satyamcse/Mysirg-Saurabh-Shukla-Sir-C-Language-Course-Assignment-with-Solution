// TSRS
int LCM(int,int);
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter Number");
    scanf("%d%d",&num1,&num2);
    printf("LCM is %d",LCM(num1,num2));
    return 0;
}
int LCM(int n1, int n2){
    int i;
    for(i = 2; i <= n1*n2; i++){
        if(i % n1 == 0 && i % n2 == 0){
            return i;
        }
    }
}