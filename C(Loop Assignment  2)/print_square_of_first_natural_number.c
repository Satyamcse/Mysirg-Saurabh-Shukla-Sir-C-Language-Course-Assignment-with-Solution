#include<stdio.h>
int main(){
    int N,i;
    printf("Enter Number");
    scanf("%d\n",&N);
    for(i = 1; i  <= N; i++){
        printf("%d\n",i*i);
    }
    return 0;
}