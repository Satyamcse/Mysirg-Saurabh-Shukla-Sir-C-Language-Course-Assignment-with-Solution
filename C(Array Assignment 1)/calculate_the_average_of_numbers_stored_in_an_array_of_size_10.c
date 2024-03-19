float Average(int[],int);
#include<stdio.h>
int main(){
    int a[10];
    printf("Sum of 10 values is %f",Average(a,10));
    return 0;
}
float Average(int b[],int size){
    int i;
    float Avg, s = 0;
    printf("Enter %d Number",size);
    for(i = 0; i < size; i++){
        scanf("%d",&b[i]);
    }
    for(i =  0; i < size; i++){
      s = s + b[i];
    }
    Avg = s / size;
    return Avg;
}