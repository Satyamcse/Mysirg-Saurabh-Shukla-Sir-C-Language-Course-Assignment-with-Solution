#include<stdio.h>
int main(){
    int a,b,*p,*q;
    printf("Enter two Number");
    scanf("%d%d",&a,&b);
    p = &a;
    q = &b;
    if(*p > *q){
        printf("%d is maximum",*p);
    }
    else{
        printf("%d is maximum",*q);
    }
    return 0;
}