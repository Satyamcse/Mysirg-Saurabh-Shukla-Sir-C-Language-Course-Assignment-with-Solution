#include<stdio.h>
int Sum_right_diagonal_matrix(int[3][3]);
int main(){
    int arr[3][3];
   printf("Sum_right_diagonal_matrix is: %d",Sum_right_diagonal_matrix(arr));
    return 0;
}
int Sum_right_diagonal_matrix(int A[3][3]){
    int i,j,Sum = 0;
    printf("Enter  Matrix 3*3: ");
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 2; j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(j = 0; j <= 2; j++){
        for(i = 0; i <= 2; i++){
            if(i == j){
               Sum = Sum + A[i][j];
            }
        }
    }
     return Sum;
}