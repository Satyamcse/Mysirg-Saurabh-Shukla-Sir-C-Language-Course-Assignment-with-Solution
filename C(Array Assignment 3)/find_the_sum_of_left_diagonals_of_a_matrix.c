#include<stdio.h>
int Sum_left_diagonal_matrix(int[3][3]);
int main(){
    int arr[3][3];
   printf("Sum_left_diagonal_matrix is: %d",Sum_left_diagonal_matrix(arr));
    return 0;
}
int Sum_left_diagonal_matrix(int A[3][3]){
    int i,j,Sum = 0;
    printf("Enter  Matrix 3*3: ");
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 2; j++){
            scanf("%d",&A[i][j]);
        }
    }
    Sum = A[0][2] + A[1][1] + A[2][0];
     return Sum;
}