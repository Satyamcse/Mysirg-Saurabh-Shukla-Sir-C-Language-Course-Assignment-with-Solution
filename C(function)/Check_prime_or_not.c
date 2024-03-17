// TSRS
int Prime(int);
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    printf("%d",Prime(num));
    return 0;
}
int Prime(int n){
    int i;
    for(i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    if(i == n){
        return 1;
    }
}