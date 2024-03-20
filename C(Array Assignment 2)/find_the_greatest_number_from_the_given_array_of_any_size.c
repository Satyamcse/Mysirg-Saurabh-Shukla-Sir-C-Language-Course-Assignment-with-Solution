int Greatest(int[],int);
#include<stdio.h>
int main(){
    int a[5];
    printf("Greastest Number is %d", Greatest(a,5));
    return 0;
}
int  Greatest(int b[],int size){
    int i,temp,j;
    printf("Enter %d Number",size);
    for(i = 0; i < size; i++){
        scanf("%d",&b[i]);
    }
    for(i = 0; i < size; i++){
        for(j = i+1; j < size; j++){
            if(b[i] < b[j]){
              temp = b[i];
              b[i] = b[j];
              b[j] = temp; 
            }
        } 
    }
    return b[0];
}