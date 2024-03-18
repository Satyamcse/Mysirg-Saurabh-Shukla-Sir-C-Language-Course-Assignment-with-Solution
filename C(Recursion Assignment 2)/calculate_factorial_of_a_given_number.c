int factorial(int);
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    printf("%d",factorial(num));
    return 0;
}
int factorial(int n){
   if(n == 0){
    return 1;
   }
   else{
     return (n * factorial(n - 1));
   }
}