#include<stdio.h>
int print_or_display_the_upper_triangular_matrix(int[3][3]);
int main(){
    int arr[3][3];
   print_or_display_the_upper_triangular_matrix(arr);
    return 0;
}
int print_or_display_the_upper_triangular_matrix(int A[3][3]){
    int i,j,count = 0;
    printf("Enter  Matrix 3*3: ");
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 2; j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(j = 0; j <= 2; j++){
        for(i = 0; i <= 2; i++){
            if(A[i][j] > 0){
              count++;  
            }
        }
    }
      if(count < (i*j)/2){
        printf("Sparse Matrix");
      }
      else{
        printf("Dense Matrix");
      }
}