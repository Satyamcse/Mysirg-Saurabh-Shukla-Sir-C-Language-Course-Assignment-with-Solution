#include<stdio.h>
int main(){
    int N,i,sum = 0;
    printf("Enter Number");
    scanf("%d\n",&N);
    for(i = 0; i <= N; i++){
        if(i % 2){
        sum = sum + i;
        }
    }
    printf("%d",sum);
    return 0;
}