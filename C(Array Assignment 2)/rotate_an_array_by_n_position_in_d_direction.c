
void rotateRight(int [],int);
#include<stdio.h>
int main(){
  int i,a[5] = {32, 29, 40, 12, 70};
  for(i = 0; i < 5; i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  rotateRight(a,5);
  for(i = 0; i < 5; i++){
    printf("%d ",a[i]);
  }
  return 0;
}
void rotateRight(int A[],int size){
    int temp,j,n = 2,i;
    for(i = 0; i <= 2; i++){
         temp = A[size - 1];
       for(j = size-2; j >= 0; j--){
           A[j + 1] = A[j];
       }
        A[0] = temp;
    }
}
