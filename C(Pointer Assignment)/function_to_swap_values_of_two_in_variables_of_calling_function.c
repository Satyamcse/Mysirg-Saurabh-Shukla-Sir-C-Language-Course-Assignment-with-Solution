#include<stdio.h>
void swap(int*, int*); 
int main(){
    int x,y;
    printf("Enter two value: ");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("x = %d and y = %d",x,y);
    return 0;
}
void swap(int *p,int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}