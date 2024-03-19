void Sort_Array(int[],int);
#include<stdio.h>
int main(){
    int a[10];
    Sort_Array(a,10);
    return 0;
}
void Sort_Array(int b[],int size){
    int i,temp,j;
    printf("Enter %d Number",size);
    for(i = 0; i < size; i++){
        scanf("%d",&b[i]);
    }
    for(i = 0; i < size; i++){
        for(j = i+1; j < size; j++){
            if(b[i] > b[j]){
              temp = b[i];
              b[i] = b[j];
              b[j] = temp; 
            }
        } 
    }
    for(i = 0; i < size; i++){
        printf("%d ",b[i]);
    }
}