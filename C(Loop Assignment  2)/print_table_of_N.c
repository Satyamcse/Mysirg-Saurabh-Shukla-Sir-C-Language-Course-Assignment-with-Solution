#include<stdio.h>
int main(){
    int N,i;
    printf("Enter Number");
    scanf("%d\n",&N);
    for(i = 1; i <= 10; i++){
        printf("%d\n",i*N);
    }
}