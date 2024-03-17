/* Write a function to check whether a given number is even or odd. Return 1 if the 
number is even, otherwise return 0 */
//TSRS
#include<stdio.h>
int main(){
  int num,result;
  printf("Enter Number");
  scanf("%d",&num);
  result  = even_odd(num);
  printf("%d",result);
  return 0;
}
int even_odd(int n){
    if(n % 2){
        return 0;
    }
    else{
        return 1;
    }
}