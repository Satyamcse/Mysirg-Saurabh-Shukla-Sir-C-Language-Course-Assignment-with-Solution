void Sum_of_Odd_Even(int[],int);
#include<stdio.h>
int main(){
    int a[10];
    Sum_of_Odd_Even(a,10);
    return 0;
}
void Sum_of_Odd_Even(int b[],int size){
    int i,Sum1 = 0,Sum2 = 0;
    printf("Enter %d Number",size);
    for(i = 0; i < size; i++){
        scanf("%d",&b[i]);
    }
  for(i = 0; i < size; i++){
     if( i % 2){
        Sum1 = Sum1 + b[i];
     }
     else{
        Sum2 = Sum2 + b[i];
     }
  }
  printf("Sum of all Even Number %d\n",Sum2);
  printf("Sum of all Odd Number %d",Sum1);

}

