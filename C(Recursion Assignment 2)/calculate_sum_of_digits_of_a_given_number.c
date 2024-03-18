int Sum_digit(int);
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    printf("%d",Sum_digit(num));
    return 0;
}
int Sum_digit(int n){
   if(n > 0){
      n = n % 10 + Sum_digit(n/10);
   }
   return n;
}