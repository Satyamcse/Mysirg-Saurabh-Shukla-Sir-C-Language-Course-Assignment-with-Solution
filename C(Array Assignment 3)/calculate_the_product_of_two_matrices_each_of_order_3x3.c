#include<stdio.h>
void Sum_Matrix(int[3][3],int[3][3]);
int main(){
    int arr[3][3],brr[3][3];
    Sum_Matrix(arr,brr);
    return 0;
}
void Sum_Matrix(int A[3][3],int B[3][3]){
    int C[3][3],i,j,k,Sum = 0;
    printf("Enter Matrix 3*3: ");
    for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                        scanf("%d",&A[i][j]);
              }
    }
    printf("Enter Matrix 3*3: ");
     for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                        scanf("%d",&B[i][j]);
            }
     }
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 2; j++){
                for(k = 0; k <= 2; k++){
                    Sum = Sum + (A[i][k] * B[k][j]);
                }
                C[i][j] = Sum;
                Sum = 0;
            }
        }
    for(i = 0; i <= 2; i++){
            for(j = 0; j <= 2; j++){
              printf("%d ",C[i][j]);
            }
            printf("\n");
        }
}
