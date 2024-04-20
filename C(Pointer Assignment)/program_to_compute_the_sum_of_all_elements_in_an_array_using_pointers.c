#include<stdio.h>
int main(){
    int arr[10],*p,i,sum = 0;
    printf("Enter 10 Numbers: ");
    for(i = 0; i <= 9; i++){
        scanf("%d",&arr[i]);
    }
    p = arr;
    for(i = 0; i < 10; i++){
        sum = sum + *(p+i); 
    }
    printf("Sum of all elements are %d",sum);
}