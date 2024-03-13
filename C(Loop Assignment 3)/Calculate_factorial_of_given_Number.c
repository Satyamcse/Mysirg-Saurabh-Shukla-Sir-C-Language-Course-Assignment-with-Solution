#include<stdio.h>
int main(){
  int N,i,fact = 1;
  printf("Enter Number");
  scanf("%d",&N);
  for(i = 2; i <= N; i++){
     fact = fact * i;
  }
   printf("%d",fact);
}