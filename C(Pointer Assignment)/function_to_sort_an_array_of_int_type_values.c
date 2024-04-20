#include<stdio.h>
void sort(int*, int); 
int main(){
    int arr[20];
    int i;
    printf("Enter two value: ");
    for(i = 0; i < 10; i++){
       scanf("%d",&arr[i]);
    }
    sort(arr,10);
    for(i = 0; i < 10; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void sort(int *p,int size){
    int temp,i,j;
     for(i = 0; i < size; i++){
        for(j = i+1; j < size; j++){
            if(p[i] > p[j]){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
     }
}