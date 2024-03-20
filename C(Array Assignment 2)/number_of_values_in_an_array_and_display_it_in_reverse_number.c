#include<stdio.h>
void Reverse_Arr(int a[],int);
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10},i;
    for(i = 0; i < 10; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    Reverse_Arr(arr,10);
    for(i = 0; i < 10; i++){
        printf("%d ",arr[i]);
      }
    return 0;
}
void Reverse_Arr(int a[],int size){
    int i,temp,j = 0;
    for(i = size - 1; i > 5; i--){
       temp = a[j];
       a[j] = a[i];
       a[i] = temp;
         j++;
    }
}
