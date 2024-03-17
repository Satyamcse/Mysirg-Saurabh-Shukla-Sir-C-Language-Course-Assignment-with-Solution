// TSRN
void natural_number(int);
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    natural_number(num);
    return 0;
}
void natural_number(int n){
    int i;
    for(i = 1; i <= n; i++){
        printf("%d ",i);
    }
}