#include<stdio.h>
int main(){
    int arr[10],i,*p;
    printf("Enter 10 Number: ");
    for(i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
    }
    p = arr;
    for(i = 9; i >= 0; i--){
        printf("%d ",*(p+i));
    } 
}