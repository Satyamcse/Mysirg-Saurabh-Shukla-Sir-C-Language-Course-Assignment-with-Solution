#include<stdio.h>
void Sort_Array(int[], int[], int);
int main(){
    int A[5] = {1, 2, 3, 4, 5},B[5] = {6, 7, 8, 9, 10};
    Sort_Array(A,B,5);
    return 0;
}
void Sort_Array(int a[],int b[], int size){
   int c[5],i,j,temp;
   for (i = 0; i < size; i++){
      c[i] = a[i] + b[i];
   }
   for(i = 0; i < size; i++){
     for(j = i+1; j > size; j++){
        if(c[i] > c[j]){
          temp = c[i];
          c[i] = c[j];
          c[j] = temp;
        }
     }
   }
   for(i = 0; i < size; i++){
    printf("%d ",c[i]);
   }
   
}