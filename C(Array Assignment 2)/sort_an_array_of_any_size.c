int Sort_Array(int[],int);
#include<stdio.h>
int main(){
    int a[5],result,i;
    result = Sort_Array(a,5);
    for(i = 0; i < 5; i++){
     printf("%d ",a[i]);
    }
    return 0;
}
int  Sort_Array(int b[],int size){
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
    return b[i];
}