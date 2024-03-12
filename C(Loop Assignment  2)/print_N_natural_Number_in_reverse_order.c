#include<stdio.h>
int main(){
 int N,i;
 printf("Enter Number");
 scanf("%d",&N);
 for(i = 1; i < N; i++){
    printf("%d\n",N-i);
 }   
 return 0;
}