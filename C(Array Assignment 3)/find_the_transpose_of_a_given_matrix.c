#include<stdio.h>
void transpose(int[3][3]);
int main(){
    int arr[3][3];
    transpose(arr);
    return 0;
}
void transpose(int A[3][3]){
    int i,j;
    printf("Enter  Matrix 3*3: ");
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 2; j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(j = 0; j <= 2; j++){
        for(i = 0; i <= 2; i++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

}