#include<stdio.h>
void Sum_right_diagonal_matrix(int[3][3]);
int main(){
    int arr[3][3];
   Sum_right_diagonal_matrix(arr);
    return 0;
}
void Sum_right_diagonal_matrix(int A[3][3]){
    int i,j,Sum = 0,S = 0;
    printf("Enter  Matrix 3*3: ");
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 2; j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 2; j++){
               Sum = Sum + A[i][j];
        }
    }
    for(j = 0; j <= 2; j++){
        for(i = 0; i <= 2; i++){
               S = S + A[i][j];
        }
    }
     printf("Sum of row matrix is %d and Sum of Columns is %d ",Sum,S);
    
}